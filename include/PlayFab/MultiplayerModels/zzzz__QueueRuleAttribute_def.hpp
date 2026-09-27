#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/QueueRuleAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AttributeSource_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(QueueRuleAttribute)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class QueueRuleAttribute;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::QueueRuleAttribute*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::QueueRuleAttribute*, "PlayFab.MultiplayerModels", "QueueRuleAttribute");
// Dependencies PlayFab.MultiplayerModels.AttributeSource, PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.QueueRuleAttribute
class CORDL_TYPE QueueRuleAttribute : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Path, put=__cordl_internal_set_Path)) ::StringW  Path;

/// @brief Field Source, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::PlayFab::MultiplayerModels::AttributeSource  Source;

static inline ::PlayFab::MultiplayerModels::QueueRuleAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Path() const;

constexpr ::StringW& __cordl_internal_get_Path() ;

constexpr ::PlayFab::MultiplayerModels::AttributeSource const& __cordl_internal_get_Source() const;

constexpr ::PlayFab::MultiplayerModels::AttributeSource& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_Path(::StringW  value) ;

constexpr void __cordl_internal_set_Source(::PlayFab::MultiplayerModels::AttributeSource  value) ;

/// @brief Method .ctor, addr 0xa840bb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueueRuleAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueueRuleAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QueueRuleAttribute(QueueRuleAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueueRuleAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueueRuleAttribute(QueueRuleAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19723};

/// @brief Field Path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Path;

/// @brief Field Source, offset: 0x18, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::AttributeSource  ___Source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::QueueRuleAttribute, ___Path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::QueueRuleAttribute, ___Source) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::QueueRuleAttribute) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
