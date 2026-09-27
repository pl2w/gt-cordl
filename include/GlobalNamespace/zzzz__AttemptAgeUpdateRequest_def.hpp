#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatform_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttemptAgeUpdateRequest)
// Forward declare root types
namespace GlobalNamespace {
class AttemptAgeUpdateRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AttemptAgeUpdateRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AttemptAgeUpdateRequest*, "", "AttemptAgeUpdateRequest");
// Dependencies KIDRequestData, PlayerPlatform
namespace GlobalNamespace {
// Is value type: false
// CS Name: AttemptAgeUpdateRequest
class CORDL_TYPE AttemptAgeUpdateRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
/// @brief Field Age, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Age, put=__cordl_internal_set_Age)) int32_t  Age;

/// @brief Field Platform, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Platform, put=__cordl_internal_set_Platform)) ::GlobalNamespace::PlayerPlatform  Platform;

static inline ::GlobalNamespace::AttemptAgeUpdateRequest* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Age() const;

constexpr int32_t& __cordl_internal_get_Age() ;

constexpr ::GlobalNamespace::PlayerPlatform const& __cordl_internal_get_Platform() const;

constexpr ::GlobalNamespace::PlayerPlatform& __cordl_internal_get_Platform() ;

constexpr void __cordl_internal_set_Age(int32_t  value) ;

constexpr void __cordl_internal_set_Platform(::GlobalNamespace::PlayerPlatform  value) ;

/// @brief Method .ctor, addr 0x5a261f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttemptAgeUpdateRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttemptAgeUpdateRequest(AttemptAgeUpdateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttemptAgeUpdateRequest(AttemptAgeUpdateRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2879};

/// @brief Field Age, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Age;

/// @brief Field Platform, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::PlayerPlatform  ___Platform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AttemptAgeUpdateRequest, ___Age) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AttemptAgeUpdateRequest, ___Platform) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AttemptAgeUpdateRequest) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
