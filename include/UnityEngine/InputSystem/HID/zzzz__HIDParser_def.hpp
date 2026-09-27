#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser)
namespace GlobalNamespace {
struct HIDParser_HIDItemStateGlobal;
}
namespace GlobalNamespace {
struct HIDParser_HIDItemStateLocal;
}
namespace GlobalNamespace {
struct HIDParser_HIDItemTypeAndTag;
}
namespace GlobalNamespace {
struct HIDParser_HIDReportData;
}
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptor;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HIDParser;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::HID::HIDParser*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HIDParser*, "UnityEngine.InputSystem.HID", "HIDParser");
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HIDParser
class CORDL_TYPE HIDParser : public ::System::Object {
public:
// Declarations
using HIDItemStateGlobal = ::GlobalNamespace::HIDParser_HIDItemStateGlobal;

using HIDItemStateLocal = ::GlobalNamespace::HIDParser_HIDItemStateLocal;

using HIDItemTypeAndTag = ::GlobalNamespace::HIDParser_HIDItemTypeAndTag;

using HIDReportData = ::GlobalNamespace::HIDParser_HIDReportData;

/// @brief Method ParseReportDescriptor, addr 0xafe3768, size 0x68, virtual false, abstract: false, final false
static inline bool ParseReportDescriptor(::ArrayW<uint8_t>  buffer, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>  deviceDescriptor) ;

/// @brief Method ParseReportDescriptor, addr 0xafe37d0, size 0xb20, virtual false, abstract: false, final false
static inline bool ParseReportDescriptor(uint8_t*  bufferPtr, int32_t  bufferLength, ::by_ref<::GlobalNamespace::HID_HIDDeviceDescriptor>  deviceDescriptor) ;

/// @brief Method ReadData, addr 0xafe42f0, size 0x68, virtual false, abstract: false, final false
static inline int32_t ReadData(int32_t  itemSize, uint8_t*  currentPtr, uint8_t*  endPtr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HIDParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HIDParser(HIDParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDParser(HIDParser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::HID::HIDParser) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
