#pragma once
// IWYU pragma private; include "Modio/API/SearchFilter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__SearchFilter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SearchFilter_1)
// Forward declare root types
namespace Modio::API {
template<typename T>
class SearchFilter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Modio::API::SearchFilter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::API::SearchFilter_1, "Modio.API", "SearchFilter`1");
// Dependencies Modio.API.SearchFilter
namespace Modio::API {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.API.SearchFilter`1<T>
class CORDL_TYPE SearchFilter_1 : public ::Modio::API::SearchFilter {
public:
// Declarations
static inline ::Modio::API::SearchFilter_1<T>* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method SetPagination, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T SetPagination(int32_t  pageIndex, int32_t  pageSize) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchFilter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchFilter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchFilter_1(SearchFilter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchFilter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchFilter_1(SearchFilter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::API
