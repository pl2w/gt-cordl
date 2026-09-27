#pragma once
// IWYU pragma private; include "Meta/WitAi/WitResponseReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitResponseReference)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi {
class WitResponseReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitResponseReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitResponseReference*, "Meta.WitAi", "WitResponseReference");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitResponseReference
class CORDL_TYPE WitResponseReference : public ::System::Object {
public:
// Declarations
/// @brief Field child, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_child, put=__cordl_internal_set_child)) ::Meta::WitAi::WitResponseReference*  child;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Method GetFloatValue, addr 0x9e7f4b8, size 0x1c, virtual true, abstract: false, final false
inline float_t GetFloatValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetIntValue, addr 0x9e7f49c, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetIntValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetStringValue, addr 0x9e7f480, size 0x1c, virtual true, abstract: false, final false
inline ::StringW GetStringValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::WitResponseReference* New_ctor() ;

constexpr ::Meta::WitAi::WitResponseReference* const& __cordl_internal_get_child() const;

constexpr ::Meta::WitAi::WitResponseReference*& __cordl_internal_get_child() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_child(::Meta::WitAi::WitResponseReference*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e7f3c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResponseReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResponseReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResponseReference(WitResponseReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResponseReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResponseReference(WitResponseReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25563};

/// @brief Field child, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::WitResponseReference*  ___child;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitResponseReference, ___child) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitResponseReference, ___path) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitResponseReference) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
