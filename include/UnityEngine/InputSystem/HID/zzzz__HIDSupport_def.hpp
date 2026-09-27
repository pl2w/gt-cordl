#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_HIDPageUsage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HIDSupport)
namespace GlobalNamespace {
struct HIDSupport_HIDPageUsage;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HIDSupport;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::HID::HIDSupport*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HIDSupport*, "UnityEngine.InputSystem.HID", "HIDSupport");
// Dependencies System.Object, UnityEngine.InputSystem.HID.HIDSupport::HIDPageUsage
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HIDSupport
class CORDL_TYPE HIDSupport : public ::System::Object {
public:
// Declarations
using HIDPageUsage = ::GlobalNamespace::HIDSupport_HIDPageUsage;

/// @brief Field s_SupportedHIDUsages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SupportedHIDUsages, put=setStaticF_s_SupportedHIDUsages)) ::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>  s_SupportedHIDUsages;

/// @brief Method Initialize, addr 0xafe4c84, size 0x160, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage> getStaticF_s_SupportedHIDUsages() ;

/// @brief Method get_supportedHIDUsages, addr 0xafe49e4, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage> get_supportedHIDUsages() ;

static inline void setStaticF_s_SupportedHIDUsages(::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>  value) ;

/// @brief Method set_supportedHIDUsages, addr 0xafe4a44, size 0x238, virtual false, abstract: false, final false
static inline void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HIDSupport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HIDSupport(HIDSupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HIDSupport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDSupport(HIDSupport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13634};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::HID::HIDSupport) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
