#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSetUserDataCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SetUserDataCompleteClientDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipSetUserDataCallback)
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
class MothershipSetUserDataCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipSetUserDataCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipSetUserDataCallback*, "", "MothershipSetUserDataCallback");
// Dependencies SetUserDataCompleteClientDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipSetUserDataCallback
class CORDL_TYPE MothershipSetUserDataCallback : public ::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipSetUserDataCallback* New_ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

/// @brief Method OnCompleteCallback, addr 0x53c1a08, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53c1998, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MothershipClientApiClient*  clientApiClient) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipSetUserDataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipSetUserDataCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipSetUserDataCallback(MothershipSetUserDataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipSetUserDataCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipSetUserDataCallback(MothershipSetUserDataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipSetUserDataCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
