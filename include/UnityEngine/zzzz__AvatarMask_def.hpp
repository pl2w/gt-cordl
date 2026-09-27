#pragma once
// IWYU pragma private; include "UnityEngine/AvatarMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarMask)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Forward declare root types
namespace UnityEngine {
class AvatarMask;
}
// Write type traits
MARK_REF_T(::UnityEngine::AvatarMask*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
// [MovedFrom(true, "UnityEditor.Animations", "UnityEditor", null)]
// [NativeHeader("Modules/Animation/AvatarMask.h")]
// [NativeHeader("Modules/Animation/ScriptBindings/Animation.bindings.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AvatarMask
class CORDL_TYPE AvatarMask : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_transformCount)) int32_t  transformCount;

/// [NativeMethod("GetBodyPart")]
/// @brief Method GetHumanoidBodyPartActive, addr 0xb54930c, size 0x80, virtual false, abstract: false, final false
inline bool GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart  index) ;

/// @brief Method GetHumanoidBodyPartActive_Injected, addr 0xb54938c, size 0x44, virtual false, abstract: false, final false
static inline bool GetHumanoidBodyPartActive_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AvatarMaskBodyPart  index) ;

/// @brief Method GetTransformActive, addr 0xb5496d4, size 0x1c, virtual false, abstract: false, final false
inline bool GetTransformActive(int32_t  index) ;

/// @brief Method GetTransformPath, addr 0xb549484, size 0x138, virtual false, abstract: false, final false
inline ::StringW GetTransformPath(int32_t  index) ;

/// @brief Method GetTransformPath_Injected, addr 0xb5495bc, size 0x54, virtual false, abstract: false, final false
static inline void GetTransformPath_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetTransformWeight, addr 0xb549610, size 0x80, virtual false, abstract: false, final false
inline float_t GetTransformWeight(int32_t  index) ;

/// @brief Method GetTransformWeight_Injected, addr 0xb549690, size 0x44, virtual false, abstract: false, final false
static inline float_t GetTransformWeight_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// [FreeFunction("AnimationBindings::CreateAvatarMask")]
/// @brief Method Internal_Create, addr 0xb5492d0, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::AvatarMask*  self) ;

static inline ::UnityEngine::AvatarMask* New_ctor() ;

/// @brief Method .ctor, addr 0xb549250, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_transformCount, addr 0xb5493d0, size 0x78, virtual false, abstract: false, final false
inline int32_t get_transformCount() ;

/// @brief Method get_transformCount_Injected, addr 0xb549448, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_transformCount_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarMask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarMask(AvatarMask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarMask(AvatarMask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AvatarMask) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
