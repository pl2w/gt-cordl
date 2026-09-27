#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughColorLutData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughColorLutData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughColorLutData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughColorLutData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughColorLutData, "", "OVRPlugin/PassthroughColorLutData");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughColorLutData
struct CORDL_TYPE OVRPlugin_PassthroughColorLutData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughColorLutData() ;

// Ctor Parameters [CppParam { name: "BufferSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughColorLutData(uint32_t  BufferSize, ::System::IntPtr  Buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field BufferSize, offset: 0x0, size: 0x4, def value: None
 uint32_t  BufferSize;

/// @brief Field Buffer, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  Buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughColorLutData, BufferSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughColorLutData, Buffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughColorLutData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
