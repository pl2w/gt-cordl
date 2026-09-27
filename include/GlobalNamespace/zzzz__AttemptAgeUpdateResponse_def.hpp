#pragma once
// IWYU pragma private; include "GlobalNamespace/AttemptAgeUpdateResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttemptAgeUpdateResponse)
namespace GlobalNamespace {
struct SessionStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class AttemptAgeUpdateResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AttemptAgeUpdateResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AttemptAgeUpdateResponse*, "", "AttemptAgeUpdateResponse");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AttemptAgeUpdateResponse
class CORDL_TYPE AttemptAgeUpdateResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Status, put=set_Status)) ::GlobalNamespace::SessionStatus  Status;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::GlobalNamespace::SessionStatus  _Status_k__BackingField;

static inline ::GlobalNamespace::AttemptAgeUpdateResponse* New_ctor() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__Status_k__BackingField(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a26208, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x5a261f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SessionStatus get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x5a26200, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::GlobalNamespace::SessionStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttemptAgeUpdateResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttemptAgeUpdateResponse(AttemptAgeUpdateResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttemptAgeUpdateResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttemptAgeUpdateResponse(AttemptAgeUpdateResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2880};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ____Status_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AttemptAgeUpdateResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AttemptAgeUpdateResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
