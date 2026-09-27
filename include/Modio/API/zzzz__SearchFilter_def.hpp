#pragma once
// IWYU pragma private; include "Modio/API/SearchFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SearchFilter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API {
class SearchFilter;
}
// Write type traits
MARK_REF_T(::Modio::API::SearchFilter*);
DEFINE_IL2CPP_CLASS(::Modio::API::SearchFilter*, "Modio.API", "SearchFilter");
// Dependencies System.Object
namespace Modio::API {
// Is value type: false
// CS Name: Modio.API.SearchFilter
class CORDL_TYPE SearchFilter : public ::System::Object {
public:
// Declarations
/// @brief Field PageIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageIndex, put=__cordl_internal_set_PageIndex)) int32_t  PageIndex;

/// @brief Field PageSize, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageSize, put=__cordl_internal_set_PageSize)) int32_t  PageSize;

/// @brief Field Parameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  Parameters;

static inline ::Modio::API::SearchFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

constexpr int32_t const& __cordl_internal_get_PageIndex() const;

constexpr int32_t& __cordl_internal_get_PageIndex() ;

constexpr int32_t const& __cordl_internal_get_PageSize() const;

constexpr int32_t& __cordl_internal_get_PageSize() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get_Parameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get_Parameters() ;

constexpr void __cordl_internal_set_PageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_PageSize(int32_t  value) ;

constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x9fdecc4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchFilter(SearchFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchFilter(SearchFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18031};

/// @brief Field PageIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___PageIndex;

/// @brief Field PageSize, offset: 0x14, size: 0x4, def value: None
 int32_t  ___PageSize;

/// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ___Parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SearchFilter, ___PageIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SearchFilter, ___PageSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SearchFilter, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SearchFilter) == 0x20, "Size mismatch!");

} // namespace end def Modio::API
