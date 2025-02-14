/* antimicrox Gamepad to KB+M event mapper
 * Copyright (C) 2015 Travis Nickles <nickles.travis@gmail.com>
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef APPLAUNCHHELPER_H
#define APPLAUNCHHELPER_H

#include <QObject>

#include <SDL2/SDL_joystick.h>

class AntiMicroSettings;
class InputDevice;
class QThread;

class AppLaunchHelper : public QObject
{
    Q_OBJECT

  public:
    explicit AppLaunchHelper(AntiMicroSettings *settings, bool graphical = false, QObject *parent = 0);

    void printControllerList(QMap<SDL_JoystickID, InputDevice *> *joysticks);

    AntiMicroSettings *getSettings() const;

  protected:
    void enablePossibleMouseSmoothing();
    void establishMouseTimerConnections();
    void changeMouseRefreshRate();
    void changeSpringModeScreen();
    void changeGamepadPollRate();
    void changeDebounceInterval();
#ifdef Q_OS_WIN
    void checkPointerPrecision();
#endif

  public slots:
#ifdef Q_OS_WIN
    void appQuitPointerPrecision();
#endif
    void initRunMethods();
    void revertMouseThread();
    void changeMouseThread(QThread *thread);

  private:
    AntiMicroSettings *settings;
    bool graphical;
};

#endif // APPLAUNCHHELPER_H
