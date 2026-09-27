#pragma once
// IWYU pragma private; include "Meta/WitAi/ArrayNodeReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayNodeReference)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi {
class ArrayNodeReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ArrayNodeReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ArrayNodeReference*, "Meta.WitAi", "ArrayNodeReference");
// Dependencies Meta.WitAi.WitResponseReference
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ArrayNodeReference
class CORDL_TYPE ArrayNodeReference : public ::Meta::WitAi::WitResponseReference {
public:
// Declarations
/// @brief Field index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Method GetFloatValue, addr 0x9e7f5c0, size 0x80, virtual true, abstract: false, final false
inline float_t GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetIntValue, addr 0x9e7f548, size 0x78, virtual true, abstract: false, final false
inline int32_t GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetStringValue, addr 0x9e7f4d4, size 0x74, virtual true, abstract: false, final false
inline ::StringW GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::ArrayNodeReference* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e7f478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayNodeReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayNodeReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayNodeReference(ArrayNodeReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayNodeReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayNodeReference(ArrayNodeReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25564};

/// @brief Field index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ArrayNodeReference, ___index) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ArrayNodeReference) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
