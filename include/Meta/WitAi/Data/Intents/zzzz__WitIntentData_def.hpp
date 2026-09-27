#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Intents/WitIntentData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WitIntentData)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
// Forward declare root types
namespace Meta::WitAi::Data::Intents {
class WitIntentData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Intents::WitIntentData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Intents::WitIntentData*, "Meta.WitAi.Data.Intents", "WitIntentData");
// Dependencies System.Object
namespace Meta::WitAi::Data::Intents {
// Is value type: false
// CS Name: Meta.WitAi.Data.Intents.WitIntentData
class CORDL_TYPE WitIntentData : public ::System::Object {
public:
// Declarations
/// @brief Field confidence, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_confidence, put=__cordl_internal_set_confidence)) float_t  confidence;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Method FromIntentWitResponseNode, addr 0x9e9ac6c, size 0x84, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::Intents::WitIntentData* FromIntentWitResponseNode(::Meta::WitAi::Json::WitResponseNode*  node) ;

static inline ::Meta::WitAi::Data::Intents::WitIntentData* New_ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

constexpr float_t const& __cordl_internal_get_confidence() const;

constexpr float_t& __cordl_internal_get_confidence() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_confidence(float_t  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e9ac40, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Json::WitResponseNode*  node) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitIntentData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitIntentData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitIntentData(WitIntentData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitIntentData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitIntentData(WitIntentData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25707};

/// [Preserve]
/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field confidence, offset: 0x20, size: 0x4, def value: None
 float_t  ___confidence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Intents::WitIntentData, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Intents::WitIntentData, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Intents::WitIntentData, ___confidence) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Intents::WitIntentData) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Intents
