#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(PlayFabResultCommon)
namespace PlayFab::SharedModels {
class PlayFabRequestCommon;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::SharedModels {
class PlayFabResultCommon;
}
// Write type traits
MARK_REF_T(::PlayFab::SharedModels::PlayFabResultCommon*);
DEFINE_IL2CPP_CLASS(::PlayFab::SharedModels::PlayFabResultCommon*, "PlayFab.SharedModels", "PlayFabResultCommon");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::SharedModels {
// Is value type: false
// CS Name: PlayFab.SharedModels.PlayFabResultCommon
class CORDL_TYPE PlayFabResultCommon : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CustomData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Object*  CustomData;

/// @brief Field Request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Request, put=__cordl_internal_set_Request)) ::PlayFab::SharedModels::PlayFabRequestCommon*  Request;

static inline ::PlayFab::SharedModels::PlayFabResultCommon* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomData() ;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& __cordl_internal_get_Request() const;

constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& __cordl_internal_get_Request() ;

constexpr void __cordl_internal_set_CustomData(::System::Object*  value) ;

constexpr void __cordl_internal_set_Request(::PlayFab::SharedModels::PlayFabRequestCommon*  value) ;

/// @brief Method .ctor, addr 0xa7def60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabResultCommon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabResultCommon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabResultCommon(PlayFabResultCommon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabResultCommon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabResultCommon(PlayFabResultCommon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19533};

/// @brief Field Request, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::SharedModels::PlayFabRequestCommon*  ___Request;

/// @brief Field CustomData, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___CustomData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::SharedModels::PlayFabResultCommon, ___Request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::SharedModels::PlayFabResultCommon, ___CustomData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::SharedModels::PlayFabResultCommon) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::SharedModels
