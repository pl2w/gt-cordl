#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRefreshIAPCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipRefreshIAPCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipRefreshIAPCallback)
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
class MothershipRefreshIAPCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipRefreshIAPCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipRefreshIAPCallback*, "", "MothershipRefreshIAPCallback");
// Dependencies MothershipRefreshIAPCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipRefreshIAPCallback
class CORDL_TYPE MothershipRefreshIAPCallback : public ::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipRefreshIAPCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bf8a8, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53bf848, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipRefreshIAPCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipRefreshIAPCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipRefreshIAPCallback(MothershipRefreshIAPCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipRefreshIAPCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipRefreshIAPCallback(MothershipRefreshIAPCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipRefreshIAPCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
