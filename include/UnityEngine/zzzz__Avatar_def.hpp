#pragma once
// IWYU pragma private; include "UnityEngine/Avatar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Avatar)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct HumanDescription;
}
// Forward declare root types
namespace UnityEngine {
class Avatar;
}
// Write type traits
MARK_REF_T(::UnityEngine::Avatar*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Avatar*, "UnityEngine", "Avatar");
// [NativeHeader("Modules/Animation/Avatar.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Avatar
class CORDL_TYPE Avatar : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_humanDescription)) ::UnityEngine::HumanDescription  humanDescription;

 __declspec(property(get=get_isHuman)) bool  isHuman;

 __declspec(property(get=get_isValid)) bool  isValid;

/// @brief Method get_humanDescription, addr 0xb549164, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::HumanDescription get_humanDescription() ;

/// @brief Method get_humanDescription_Injected, addr 0xb54920c, size 0x44, virtual false, abstract: false, final false
static inline void get_humanDescription_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::HumanDescription>  ret) ;

/// [NativeMethod("IsHuman")]
/// @brief Method get_isHuman, addr 0xb546394, size 0x78, virtual false, abstract: false, final false
inline bool get_isHuman() ;

/// @brief Method get_isHuman_Injected, addr 0xb549128, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isHuman_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("IsValid")]
/// @brief Method get_isValid, addr 0xb54631c, size 0x78, virtual false, abstract: false, final false
inline bool get_isValid() ;

/// @brief Method get_isValid_Injected, addr 0xb5490ec, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isValid_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Avatar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Avatar(Avatar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Avatar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Avatar(Avatar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29785};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Avatar) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
