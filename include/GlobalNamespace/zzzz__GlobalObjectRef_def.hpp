#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalObjectRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GlobalObjectRefType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalObjectRef)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalObjectRef;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlobalObjectRef);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalObjectRef, "", "GlobalObjectRef");
// Dependencies GlobalObjectRefType, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: GlobalObjectRef
struct CORDL_TYPE GlobalObjectRef {
public:
// Declarations
/// @brief Field assetGUID, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_assetGUID, put=__cordl_internal_set_assetGUID)) ::System::Guid  assetGUID;

/// @brief Field identifierType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_identifierType, put=__cordl_internal_set_identifierType)) int32_t  identifierType;

/// @brief Field refType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_refType, put=__cordl_internal_set_refType)) ::GlobalNamespace::GlobalObjectRefType  refType;

/// @brief Field targetObjectId, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObjectId, put=__cordl_internal_set_targetObjectId)) uint64_t  targetObjectId;

/// @brief Field targetPrefabId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPrefabId, put=__cordl_internal_set_targetPrefabId)) uint64_t  targetPrefabId;

/// @brief Method ObjectToRefSlow, addr 0x5a1c1fc, size 0x10, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GlobalObjectRef ObjectToRefSlow(::UnityEngine::Object*  target) ;

/// @brief Method RefToObjectSlow, addr 0x5a1c20c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> RefToObjectSlow(::GlobalNamespace::GlobalObjectRef  ref) ;

constexpr ::System::Guid const& __cordl_internal_get_assetGUID() const;

constexpr ::System::Guid& __cordl_internal_get_assetGUID() ;

constexpr int32_t const& __cordl_internal_get_identifierType() const;

constexpr int32_t& __cordl_internal_get_identifierType() ;

constexpr ::GlobalNamespace::GlobalObjectRefType const& __cordl_internal_get_refType() const;

constexpr ::GlobalNamespace::GlobalObjectRefType& __cordl_internal_get_refType() ;

constexpr uint64_t const& __cordl_internal_get_targetObjectId() const;

constexpr uint64_t& __cordl_internal_get_targetObjectId() ;

constexpr uint64_t const& __cordl_internal_get_targetPrefabId() const;

constexpr uint64_t& __cordl_internal_get_targetPrefabId() ;

constexpr void __cordl_internal_set_assetGUID(::System::Guid  value) ;

constexpr void __cordl_internal_set_identifierType(int32_t  value) ;

constexpr void __cordl_internal_set_refType(::GlobalNamespace::GlobalObjectRefType  value) ;

constexpr void __cordl_internal_set_targetObjectId(uint64_t  value) ;

constexpr void __cordl_internal_set_targetPrefabId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GlobalObjectRef() ;

// Ctor Parameters [CppParam { name: "targetObjectId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetPrefabId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "assetGUID", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "identifierType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "refType", ty: "::GlobalNamespace::GlobalObjectRefType", modifiers: "", def_value: None, comment: None }]
constexpr GlobalObjectRef(uint64_t  targetObjectId, uint64_t  targetPrefabId, ::System::Guid  assetGUID, int32_t  identifierType, ::GlobalNamespace::GlobalObjectRefType  refType) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___targetObjectId_padding[0x0];
/// @brief Field targetObjectId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___targetObjectId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___targetObjectId_padding_forAlignment[0x0];
/// @brief Field targetObjectId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___targetObjectId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___targetPrefabId_padding[0x8];
/// @brief Field targetPrefabId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___targetPrefabId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___targetPrefabId_padding_forAlignment[0x8];
/// @brief Field targetPrefabId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___targetPrefabId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___assetGUID_padding[0x10];
/// @brief Field assetGUID, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___assetGUID;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___assetGUID_padding_forAlignment[0x10];
/// @brief Field assetGUID, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  ___assetGUID_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___identifierType_padding[0x20];
/// [HideInInspector]
/// @brief Field identifierType, offset: 0x20, size: 0x4, def value: None
 int32_t  ___identifierType;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___identifierType_padding_forAlignment[0x20];
/// [HideInInspector]
/// @brief Field identifierType, offset: 0x20, size: 0x4, def value: None
 int32_t  ___identifierType_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___refType_padding[0x20];
/// @brief Field refType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GlobalObjectRefType  ___refType;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___refType_padding_forAlignment[0x20];
/// @brief Field refType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GlobalObjectRefType  ___refType_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GlobalObjectRef) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
