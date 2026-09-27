#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetMySubscriptionCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClientGetMySubscriptionCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetMySubscriptionCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipGetMySubscriptionCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetMySubscriptionCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetMySubscriptionCallback*, "", "MothershipGetMySubscriptionCallback");
// Dependencies ClientGetMySubscriptionCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetMySubscriptionCallback
class CORDL_TYPE MothershipGetMySubscriptionCallback : public ::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetMySubscriptionCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53beb34, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bead4, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetMySubscriptionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMySubscriptionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetMySubscriptionCallback(MothershipGetMySubscriptionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetMySubscriptionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetMySubscriptionCallback(MothershipGetMySubscriptionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetMySubscriptionCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
