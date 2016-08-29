#ifndef SIDECAR_GUI_QRADIOBUTTONSETTING_H // -*- C++ -*-
#define SIDECAR_GUI_QRADIOBUTTONSETTING_H

#include "QtGui/QRadioButton"

#include "GUI/BoolSetting.h"

namespace SideCar {
namespace GUI {

class QRadioButtonSetting : public BoolSetting
{
public:
    QRadioButtonSetting(PresetManager* mgr, QRadioButton* widget,
                        bool global = false);
};

} // end namespace GUI
} // end namespace SideCar

#endif
