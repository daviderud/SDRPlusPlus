#pragma once
#define IMGUI_DEFINE_MATH_OPERATORS
#include <imgui/imgui.h>

namespace ImGui {
    void SNRMeter(float val, const ImVec2& size_arg = ImVec2(0, 0));
}