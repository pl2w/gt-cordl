#pragma once
// IWYU pragma private; include "Steamworks/Callback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Callback)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Steamworks {
class Callback;
}
// Write type traits
MARK_REF_T(::Steamworks::Callback*);
DEFINE_IL2CPP_CLASS(::Steamworks::Callback*, "Steamworks", "Callback");
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.Callback
class CORDL_TYPE Callback : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsGameServer)) bool  IsGameServer;

/// @brief Method GetCallbackType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* GetCallbackType() ;

static inline ::Steamworks::Callback* New_ctor() ;

/// @brief Method OnRunCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRunCallback(::System::IntPtr  pvParam) ;

/// @brief Method SetUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetUnregistered() ;

/// @brief Method .ctor, addr 0x5f32108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsGameServer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsGameServer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Callback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Callback(Callback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callback(Callback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::Callback) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
