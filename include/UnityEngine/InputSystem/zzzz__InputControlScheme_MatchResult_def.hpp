#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme_MatchResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_Result_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControlScheme_MatchResult)
namespace GlobalNamespace {
struct InputControlScheme_DeviceRequirement;
}
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Enumerator;
}
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Match;
}
namespace GlobalNamespace {
struct MatchResult_InputControlScheme_Result;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputControlScheme_MatchResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputControlScheme_MatchResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputControlScheme_MatchResult, "UnityEngine.InputSystem", "InputControlScheme/MatchResult");
// [DefaultMember("Item")]
// Dependencies UnityEngine.InputSystem.InputControlList`1<TControl>, UnityEngine.InputSystem.InputControlScheme::DeviceRequirement, UnityEngine.InputSystem.InputControlScheme::MatchResult::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputControlScheme/MatchResult
struct CORDL_TYPE InputControlScheme_MatchResult {
public:
// Declarations
using Enumerator = ::GlobalNamespace::MatchResult_InputControlScheme_Enumerator;

using Match = ::GlobalNamespace::MatchResult_InputControlScheme_Match;

using Result = ::GlobalNamespace::MatchResult_InputControlScheme_Result;

 __declspec(property(get=get_Item)) ::GlobalNamespace::MatchResult_InputControlScheme_Match  Item[];

 __declspec(property(get=get_devices)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  devices;

 __declspec(property(get=get_hasMissingOptionalDevices)) bool  hasMissingOptionalDevices;

 __declspec(property(get=get_hasMissingRequiredDevices)) bool  hasMissingRequiredDevices;

 __declspec(property(get=get_isSuccessfulMatch)) bool  isSuccessfulMatch;

 __declspec(property(get=get_score)) float_t  score;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf4b4b4, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetEnumerator, addr 0xaf4b41c, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaf4b4b0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item, addr 0xaf4b358, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::MatchResult_InputControlScheme_Match get_Item(int32_t  index) ;

/// @brief Method get_devices, addr 0xaf4b21c, size 0x13c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*> get_devices() ;

/// @brief Method get_hasMissingOptionalDevices, addr 0xaf4b20c, size 0x10, virtual false, abstract: false, final false
inline bool get_hasMissingOptionalDevices() ;

/// @brief Method get_hasMissingRequiredDevices, addr 0xaf4b1fc, size 0x10, virtual false, abstract: false, final false
inline bool get_hasMissingRequiredDevices() ;

/// @brief Method get_isSuccessfulMatch, addr 0xaf4b1ec, size 0x10, virtual false, abstract: false, final false
inline bool get_isSuccessfulMatch() ;

/// @brief Method get_score, addr 0xaf4b1e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_score() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::MatchResult_InputControlScheme_Match>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__MatchResult_InputControlScheme_Match_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputControlScheme_MatchResult() ;

// Ctor Parameters [CppParam { name: "m_Result", ty: "::GlobalNamespace::MatchResult_InputControlScheme_Result", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Score", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Devices", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Controls", ty: "::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Requirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: None, comment: None }]
constexpr InputControlScheme_MatchResult(::GlobalNamespace::MatchResult_InputControlScheme_Result  m_Result, float_t  m_Score, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  m_Devices, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_Result, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::MatchResult_InputControlScheme_Result  m_Result;

/// @brief Field m_Score, offset: 0x4, size: 0x4, def value: None
 float_t  m_Score;

/// @brief Field m_Devices, offset: 0x8, size: 0x20, def value: None
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputDevice*>  m_Devices;

/// @brief Field m_Controls, offset: 0x28, size: 0x20, def value: None
 ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  m_Controls;

/// @brief Field m_Requirements, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_Requirements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputControlScheme_MatchResult, m_Result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_MatchResult, m_Score) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_MatchResult, m_Devices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_MatchResult, m_Controls) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputControlScheme_MatchResult, m_Requirements) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputControlScheme_MatchResult) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
