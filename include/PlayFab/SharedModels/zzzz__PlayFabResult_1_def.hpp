#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabResult_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayFabResult_1)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::SharedModels {
template<typename TResult>
class PlayFabResult_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::PlayFab::SharedModels::PlayFabResult_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::SharedModels::PlayFabResult_1, "PlayFab.SharedModels", "PlayFabResult`1");
// Dependencies System.Object
namespace PlayFab::SharedModels {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: PlayFab.SharedModels.PlayFabResult`1<TResult>
class CORDL_TYPE PlayFabResult_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CustomData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Object*  CustomData;

/// @brief Field Result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) TResult  Result;

static inline ::PlayFab::SharedModels::PlayFabResult_1<TResult>* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomData() ;

constexpr TResult const& __cordl_internal_get_Result() const;

constexpr TResult& __cordl_internal_get_Result() ;

constexpr void __cordl_internal_set_CustomData(::System::Object*  value) ;

constexpr void __cordl_internal_set_Result(TResult  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabResult_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabResult_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabResult_1(PlayFabResult_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabResult_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabResult_1(PlayFabResult_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19535};

/// @brief Field Result, offset: 0x10, size: 0x8, def value: None
 TResult  ___Result;

/// @brief Field CustomData, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___CustomData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::SharedModels
