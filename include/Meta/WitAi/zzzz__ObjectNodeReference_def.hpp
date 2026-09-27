#pragma once
// IWYU pragma private; include "Meta/WitAi/ObjectNodeReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__WitResponseReference_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectNodeReference)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi {
class ObjectNodeReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ObjectNodeReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ObjectNodeReference*, "Meta.WitAi", "ObjectNodeReference");
// Dependencies Meta.WitAi.WitResponseReference
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.ObjectNodeReference
class CORDL_TYPE ObjectNodeReference : public ::Meta::WitAi::WitResponseReference {
public:
// Declarations
/// @brief Field key, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

/// @brief Method GetFloatValue, addr 0x9e7f78c, size 0x78, virtual true, abstract: false, final false
inline float_t GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetIntValue, addr 0x9e7f714, size 0x78, virtual true, abstract: false, final false
inline int32_t GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetStringValue, addr 0x9e7f640, size 0xd4, virtual true, abstract: false, final false
inline ::StringW GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::ObjectNodeReference* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e7f470, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectNodeReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectNodeReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectNodeReference(ObjectNodeReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectNodeReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectNodeReference(ObjectNodeReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25565};

/// @brief Field key, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::ObjectNodeReference, ___key) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::ObjectNodeReference) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
