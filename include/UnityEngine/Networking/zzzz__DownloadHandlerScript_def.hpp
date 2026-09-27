#pragma once
// IWYU pragma private; include "UnityEngine/Networking/DownloadHandlerScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadHandlerScript)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerScript;
}
// Write type traits
MARK_REF_T(::UnityEngine::Networking::DownloadHandlerScript*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Networking::DownloadHandlerScript*, "UnityEngine.Networking", "DownloadHandlerScript");
// [NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerScript.h")]
// Dependencies UnityEngine.Networking.DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: UnityEngine.Networking.DownloadHandlerScript
class CORDL_TYPE DownloadHandlerScript : public ::UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief Method Create, addr 0xb9282f4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr Create(/* [Unmarshalled] */ ::UnityEngine::Networking::DownloadHandlerScript*  obj) ;

/// @brief Method CreatePreallocated, addr 0xb928330, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr CreatePreallocated(/* [Unmarshalled] */ ::UnityEngine::Networking::DownloadHandlerScript*  obj, /* [Unmarshalled] */ ::ArrayW<uint8_t>  preallocatedBuffer) ;

/// @brief Method InternalCreateScript, addr 0xb928374, size 0x44, virtual false, abstract: false, final false
inline void InternalCreateScript() ;

/// @brief Method InternalCreateScript, addr 0xb9283b8, size 0x4c, virtual false, abstract: false, final false
inline void InternalCreateScript(::ArrayW<uint8_t>  preallocatedBuffer) ;

static inline ::UnityEngine::Networking::DownloadHandlerScript* New_ctor() ;

static inline ::UnityEngine::Networking::DownloadHandlerScript* New_ctor(::ArrayW<uint8_t>  preallocatedBuffer) ;

/// @brief Method .ctor, addr 0xb928404, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb928450, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  preallocatedBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadHandlerScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerScript", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadHandlerScript(DownloadHandlerScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadHandlerScript(DownloadHandlerScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31714};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Networking::DownloadHandlerScript) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Networking
