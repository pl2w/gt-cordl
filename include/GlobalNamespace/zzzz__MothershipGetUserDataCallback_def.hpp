#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetUserDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetUserDataCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetUserDataCallback)
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
class MothershipGetUserDataCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetUserDataCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetUserDataCallback*, "", "MothershipGetUserDataCallback");
// Dependencies GetUserDataCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetUserDataCallback
class CORDL_TYPE MothershipGetUserDataCallback : public ::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetUserDataCallback* New_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

/// @brief Method OnCompleteCallback, addr 0x53c180c, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c179c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetUserDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetUserDataCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetUserDataCallback(MothershipGetUserDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetUserDataCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetUserDataCallback(MothershipGetUserDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetUserDataCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
