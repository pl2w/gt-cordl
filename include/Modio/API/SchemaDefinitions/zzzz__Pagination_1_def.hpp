#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/Pagination_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Pagination_1)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
template<typename T>
struct Pagination_1;
}
// Write type traits
MARK_GEN_VAL_T(::Modio::API::SchemaDefinitions::Pagination_1);
DEFINE_IL2CPP_GEN_CLASS(::Modio::API::SchemaDefinitions::Pagination_1, "Modio.API.SchemaDefinitions", "Pagination`1");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.Pagination`1<T>
struct CORDL_TYPE Pagination_1 {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  data, int64_t  resultCount, int64_t  resultOffset, int64_t  resultLimit, int64_t  resultTotal) ;

// Ctor Parameters []
// @brief default ctor
constexpr Pagination_1() ;

// Ctor Parameters [CppParam { name: "Data", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultCount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultOffset", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultLimit", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultTotal", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr Pagination_1(T  Data, int64_t  ResultCount, int64_t  ResultOffset, int64_t  ResultLimit, int64_t  ResultTotal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18192};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 T  Data;

/// @brief Field ResultCount, offset: 0x8, size: 0x8, def value: None
 int64_t  ResultCount;

/// @brief Field ResultOffset, offset: 0x10, size: 0x8, def value: None
 int64_t  ResultOffset;

/// @brief Field ResultLimit, offset: 0x18, size: 0x8, def value: None
 int64_t  ResultLimit;

/// @brief Field ResultTotal, offset: 0x20, size: 0x8, def value: None
 int64_t  ResultTotal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Modio::API::SchemaDefinitions
