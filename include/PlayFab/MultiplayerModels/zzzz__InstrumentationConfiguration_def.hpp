#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/InstrumentationConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InstrumentationConfiguration)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class InstrumentationConfiguration;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::InstrumentationConfiguration*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::InstrumentationConfiguration*, "PlayFab.MultiplayerModels", "InstrumentationConfiguration");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.InstrumentationConfiguration
class CORDL_TYPE InstrumentationConfiguration : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ProcessesToMonitor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProcessesToMonitor, put=__cordl_internal_set_ProcessesToMonitor)) ::System::Collections::Generic::List_1<::StringW>*  ProcessesToMonitor;

static inline ::PlayFab::MultiplayerModels::InstrumentationConfiguration* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ProcessesToMonitor() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ProcessesToMonitor() ;

constexpr void __cordl_internal_set_ProcessesToMonitor(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840a38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentationConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentationConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentationConfiguration(InstrumentationConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentationConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentationConfiguration(InstrumentationConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19673};

/// @brief Field ProcessesToMonitor, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ProcessesToMonitor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::InstrumentationConfiguration, ___ProcessesToMonitor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::InstrumentationConfiguration) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
