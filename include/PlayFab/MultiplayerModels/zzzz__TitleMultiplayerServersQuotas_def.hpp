#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TitleMultiplayerServersQuotas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(TitleMultiplayerServersQuotas)
namespace PlayFab::MultiplayerModels {
class CoreCapacity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class TitleMultiplayerServersQuotas;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*, "PlayFab.MultiplayerModels", "TitleMultiplayerServersQuotas");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.TitleMultiplayerServersQuotas
class CORDL_TYPE TitleMultiplayerServersQuotas : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CoreCapacities, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CoreCapacities, put=__cordl_internal_set_CoreCapacities)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*  CoreCapacities;

static inline ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>* const& __cordl_internal_get_CoreCapacities() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*& __cordl_internal_get_CoreCapacities() ;

constexpr void __cordl_internal_set_CoreCapacities(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*  value) ;

/// @brief Method .ctor, addr 0xa840c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TitleMultiplayerServersQuotas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TitleMultiplayerServersQuotas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TitleMultiplayerServersQuotas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19745};

/// @brief Field CoreCapacities, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*  ___CoreCapacities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas, ___CoreCapacities) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
