#pragma once
// IWYU pragma private; include "Modio/Mods/ModioPage_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioPage_1)
// Forward declare root types
namespace Modio::Mods {
template<typename T>
class ModioPage_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::Mods::ModioPage_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Mods::ModioPage_1, "Modio.Mods", "ModioPage`1");
// Dependencies System.Object
namespace Modio::Mods {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.Mods.ModioPage`1<T>
class CORDL_TYPE ModioPage_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<T>  Data;

/// @brief Field PageIndex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PageIndex, put=__cordl_internal_set_PageIndex)) int64_t  PageIndex;

/// @brief Field PageSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) int32_t  PageSize;

/// @brief Field TotalSearchResults, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalSearchResults, put=__cordl_internal_set_TotalSearchResults)) int64_t  TotalSearchResults;

/// @brief Method HasMoreResults, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HasMoreResults() ;

static inline ::Modio::Mods::ModioPage_1<T>* New_ctor(::ArrayW<T>  data, int32_t  pageSize, int64_t  pageIndex, int64_t  totalSearchResults) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<T>& __cordl_internal_get_Data() ;

constexpr int64_t const& __cordl_internal_get_PageIndex() const;

constexpr int64_t& __cordl_internal_get_PageIndex() ;

constexpr int32_t const& __cordl_internal_get_PageSize() const;

constexpr int32_t& __cordl_internal_get_PageSize() ;

constexpr int64_t const& __cordl_internal_get_TotalSearchResults() const;

constexpr int64_t& __cordl_internal_get_TotalSearchResults() ;

constexpr void __cordl_internal_set_Data(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_PageIndex(int64_t  value) ;

constexpr void __cordl_internal_set_PageSize(int32_t  value) ;

constexpr void __cordl_internal_set_TotalSearchResults(int64_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  data, int32_t  pageSize, int64_t  pageIndex, int64_t  totalSearchResults) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioPage_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioPage_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioPage_1(ModioPage_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioPage_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioPage_1(ModioPage_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17593};

/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___Data;

/// @brief Field PageSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___PageSize;

/// @brief Field PageIndex, offset: 0x20, size: 0x8, def value: None
 int64_t  ___PageIndex;

/// @brief Field TotalSearchResults, offset: 0x28, size: 0x8, def value: None
 int64_t  ___TotalSearchResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Mods
