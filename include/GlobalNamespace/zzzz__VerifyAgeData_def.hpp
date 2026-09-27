#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyAgeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SessionStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VerifyAgeData)
namespace GlobalNamespace {
class TMPSession;
}
namespace GlobalNamespace {
class VerifyAgeResponse;
}
// Forward declare root types
namespace GlobalNamespace {
class VerifyAgeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerifyAgeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerifyAgeData*, "", "VerifyAgeData");
// Dependencies SessionStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerifyAgeData
class CORDL_TYPE VerifyAgeData : public ::System::Object {
public:
// Declarations
/// @brief Field Session, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Session, put=__cordl_internal_set_Session)) ::GlobalNamespace::TMPSession*  Session;

/// @brief Field Status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::GlobalNamespace::SessionStatus  Status;

static inline ::GlobalNamespace::VerifyAgeData* New_ctor(::GlobalNamespace::VerifyAgeResponse*  response) ;

constexpr ::GlobalNamespace::TMPSession* const& __cordl_internal_get_Session() const;

constexpr ::GlobalNamespace::TMPSession*& __cordl_internal_get_Session() ;

constexpr ::GlobalNamespace::SessionStatus const& __cordl_internal_get_Status() const;

constexpr ::GlobalNamespace::SessionStatus& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Session(::GlobalNamespace::TMPSession*  value) ;

constexpr void __cordl_internal_set_Status(::GlobalNamespace::SessionStatus  value) ;

/// @brief Method .ctor, addr 0x5a27510, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::VerifyAgeResponse*  response) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerifyAgeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerifyAgeData(VerifyAgeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerifyAgeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerifyAgeData(VerifyAgeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2895};

/// @brief Field Status, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SessionStatus  ___Status;

/// @brief Field Session, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::TMPSession*  ___Session;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerifyAgeData, ___Status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerifyAgeData, ___Session) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerifyAgeData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
