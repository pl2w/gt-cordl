#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipConsumeCompleteCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClientConsumeConsumableCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipConsumeCompleteCallback)
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
class MothershipConsumeCompleteCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipConsumeCompleteCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipConsumeCompleteCallback*, "", "MothershipConsumeCompleteCallback");
// Dependencies ClientConsumeConsumableCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipConsumeCompleteCallback
class CORDL_TYPE MothershipConsumeCompleteCallback : public ::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipConsumeCompleteCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bf2e4, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bf284, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipConsumeCompleteCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipConsumeCompleteCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipConsumeCompleteCallback(MothershipConsumeCompleteCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipConsumeCompleteCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipConsumeCompleteCallback(MothershipConsumeCompleteCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipConsumeCompleteCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
