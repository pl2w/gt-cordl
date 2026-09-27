#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFuture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFuture)
namespace GlobalNamespace {
struct OVRFuture__When_d__0;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFuture;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRFuture*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFuture*, "", "OVRFuture");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFuture
class CORDL_TYPE OVRFuture : public ::System::Object {
public:
// Declarations
using _When_d__0 = ::GlobalNamespace::OVRFuture__When_d__0;

/// [AsyncStateMachine(typeof(OVRFuture::<When>d__0))]
/// @brief Method When, addr 0xa658344, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> When(uint64_t  future, ::System::Threading::CancellationToken  cancellationToken) ;

/// [CompilerGenerated]
/// @brief Method <When>g__CheckCancellationAndThrow|0_1, addr 0xa65850c, size 0xf4, virtual false, abstract: false, final false
static inline void _When_g__CheckCancellationAndThrow_0_1(uint64_t  futureToCancel, ::System::Threading::CancellationToken  token) ;

/// [CompilerGenerated]
/// @brief Method <When>g__LogIfNotSuccess|0_0, addr 0xa658430, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result _When_g__LogIfNotSuccess_0_0(::GlobalNamespace::OVRPlugin_Result  value, ::StringW  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRFuture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRFuture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRFuture(OVRFuture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRFuture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRFuture(OVRFuture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12552};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRFuture) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
