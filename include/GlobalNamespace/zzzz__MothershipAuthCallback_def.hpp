#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipAuthCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LoginCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipAuthCallback)
namespace GlobalNamespace {
class MothershipClientApiClient;
}
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
class MothershipAuthCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipAuthCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipAuthCallback*, "", "MothershipAuthCallback");
// Dependencies LoginCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipAuthCallback
class CORDL_TYPE MothershipAuthCallback : public ::GlobalNamespace::LoginCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipAuthCallback* New_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

/// @brief Method OnCompleteCallback, addr 0x53b8d1c, size 0x328, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53b8cac, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipAuthCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipAuthCallback(MothershipAuthCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipAuthCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipAuthCallback(MothershipAuthCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipAuthCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
