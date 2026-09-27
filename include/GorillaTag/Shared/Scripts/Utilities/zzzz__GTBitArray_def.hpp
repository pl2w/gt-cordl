#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Utilities/GTBitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTBitArray)
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Utilities {
class GTBitArray;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*, "GorillaTag.Shared.Scripts.Utilities", "GTBitArray");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Utilities {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Utilities.GTBitArray
class CORDL_TYPE GTBitArray : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

/// @brief Field Length, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Length, put=__cordl_internal_set_Length)) int32_t  Length;

/// @brief Field _data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint32_t>  _data;

/// @brief Method Clear, addr 0x5d4d9f4, size 0x48, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CopyFrom, addr 0x5d4da3c, size 0xc8, virtual false, abstract: false, final false
inline void CopyFrom(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  other) ;

static inline ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* New_ctor(int32_t  length) ;

constexpr int32_t const& __cordl_internal_get_Length() const;

constexpr int32_t& __cordl_internal_get_Length() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get__data() ;

constexpr void __cordl_internal_set_Length(int32_t  value) ;

constexpr void __cordl_internal_set__data(::ArrayW<uint32_t>  value) ;

/// @brief Method .ctor, addr 0x5d4d928, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  length) ;

/// @brief Method get_Item, addr 0x5d4d7f0, size 0x80, virtual false, abstract: false, final false
inline bool get_Item(int32_t  idx) ;

/// @brief Method set_Item, addr 0x5d4d870, size 0xb8, virtual false, abstract: false, final false
inline void set_Item(int32_t  idx, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTBitArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTBitArray", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTBitArray(GTBitArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTBitArray", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTBitArray(GTBitArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4768};

/// @brief Field Length, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Length;

/// @brief Field _data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Shared::Scripts::Utilities::GTBitArray, ___Length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Shared::Scripts::Utilities::GTBitArray, ____data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Shared::Scripts::Utilities::GTBitArray) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Utilities
