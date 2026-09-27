#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/WitValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitValue)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi {
class WitResponseReference;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class WitValue;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::WitValue*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::WitValue*, "Meta.WitAi.Data", "WitValue");
// Dependencies UnityEngine.ScriptableObject
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.WitValue
class CORDL_TYPE WitValue : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Reference)) ::Meta::WitAi::WitResponseReference*  Reference;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field reference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reference, put=__cordl_internal_set_reference)) ::Meta::WitAi::WitResponseReference*  reference;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Equals(::Meta::WitAi::Json::WitResponseNode*  response, ::System::Object*  value) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetValue(::Meta::WitAi::Json::WitResponseNode*  response) ;

static inline ::Meta::WitAi::Data::WitValue* New_ctor() ;

/// @brief Method ToString, addr 0x9e9ac18, size 0x28, virtual false, abstract: false, final false
inline ::StringW ToString(::Meta::WitAi::Json::WitResponseNode*  response) ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr ::Meta::WitAi::WitResponseReference* const& __cordl_internal_get_reference() const;

constexpr ::Meta::WitAi::WitResponseReference*& __cordl_internal_get_reference() ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_reference(::Meta::WitAi::WitResponseReference*  value) ;

/// @brief Method .ctor, addr 0x9e9aa00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Reference, addr 0x9e9a9a8, size 0x44, virtual false, abstract: false, final false
inline ::Meta::WitAi::WitResponseReference* get_Reference() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitValue(WitValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitValue(WitValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25705};

/// [SerializeField]
/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field reference, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::WitResponseReference*  ___reference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::WitValue, ___path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::WitValue, ___reference) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::WitValue) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
