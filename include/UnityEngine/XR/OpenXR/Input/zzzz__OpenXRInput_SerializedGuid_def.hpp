#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput_SerializedGuid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput_SerializedGuid)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRInput_SerializedGuid;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRInput_SerializedGuid);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRInput_SerializedGuid, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedGuid");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid
struct CORDL_TYPE OpenXRInput_SerializedGuid {
public:
// Declarations
/// @brief Field guid, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_guid, put=__cordl_internal_set_guid)) ::System::Guid  guid;

/// @brief Field ulong1, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulong1, put=__cordl_internal_set_ulong1)) uint64_t  ulong1;

/// @brief Field ulong2, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ulong2, put=__cordl_internal_set_ulong2)) uint64_t  ulong2;

constexpr ::System::Guid const& __cordl_internal_get_guid() const;

constexpr ::System::Guid& __cordl_internal_get_guid() ;

constexpr uint64_t const& __cordl_internal_get_ulong1() const;

constexpr uint64_t& __cordl_internal_get_ulong1() ;

constexpr uint64_t const& __cordl_internal_get_ulong2() const;

constexpr uint64_t& __cordl_internal_get_ulong2() ;

constexpr void __cordl_internal_set_guid(::System::Guid  value) ;

constexpr void __cordl_internal_set_ulong1(uint64_t  value) ;

constexpr void __cordl_internal_set_ulong2(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRInput_SerializedGuid() ;

// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ulong2", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRInput_SerializedGuid(::System::Guid  guid, uint64_t  ulong1, uint64_t  ulong2) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___guid_padding[0x0];
/// @brief Field guid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  ___guid;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___guid_padding_forAlignment[0x0];
/// @brief Field guid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  ___guid_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ulong1_padding[0x0];
/// @brief Field ulong1, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ulong1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ulong1_padding_forAlignment[0x0];
/// @brief Field ulong1, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___ulong1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___ulong2_padding[0x8];
/// @brief Field ulong2, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulong2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___ulong2_padding_forAlignment[0x8];
/// @brief Field ulong2, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___ulong2_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OpenXRInput_SerializedGuid) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
