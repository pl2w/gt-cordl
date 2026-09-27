#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityDataBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitEntityDataBase_1)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
template<typename T>
class WitEntityDataBase_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::Data::Entities::WitEntityDataBase_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::Data::Entities::WitEntityDataBase_1, "Meta.WitAi.Data.Entities", "WitEntityDataBase`1");
// Dependencies System.Object
namespace Meta::WitAi::Data::Entities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitEntityDataBase`1<T>
class CORDL_TYPE WitEntityDataBase_1 : public ::System::Object {
public:
// Declarations
/// @brief Field responseNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Field value, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

/// [Preserve]
/// @brief Method FromEntityWitResponseNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>* FromEntityWitResponseNode(::Meta::WitAi::Json::WitResponseNode*  node) ;

static inline ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>* New_ctor() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitEntityDataBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitEntityDataBase_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitEntityDataBase_1(WitEntityDataBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitEntityDataBase_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitEntityDataBase_1(WitEntityDataBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25717};

/// @brief Field responseNode, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field value, offset: 0x18, size: 0x8, def value: None
 T  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data::Entities
