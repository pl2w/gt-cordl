#pragma once
// IWYU pragma private; include "UnityEngine/PlayerPrefs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefs)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
class PlayerPrefs;
}
// Write type traits
MARK_REF_T(::UnityEngine::PlayerPrefs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerPrefs*, "UnityEngine", "PlayerPrefs");
// [NativeHeader("Runtime/Utilities/PlayerPrefs.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.PlayerPrefs
class CORDL_TYPE PlayerPrefs : public ::System::Object {
public:
// Declarations
/// @brief Method DeleteKey, addr 0xb5d4b2c, size 0x168, virtual false, abstract: false, final false
static inline void DeleteKey(::StringW  key) ;

/// @brief Method DeleteKey_Injected, addr 0xb5d4c94, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key) ;

/// @brief Method GetFloat, addr 0xb5d45d0, size 0x8, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key) ;

/// @brief Method GetFloat, addr 0xb5d4408, size 0x17c, virtual false, abstract: false, final false
static inline float_t GetFloat(::StringW  key, float_t  defaultValue) ;

/// @brief Method GetFloat_Injected, addr 0xb5d4584, size 0x4c, virtual false, abstract: false, final false
static inline float_t GetFloat_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, float_t  defaultValue) ;

/// @brief Method GetInt, addr 0xb5d43a8, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key) ;

/// @brief Method GetInt, addr 0xb5d41ec, size 0x178, virtual false, abstract: false, final false
static inline int32_t GetInt(::StringW  key, int32_t  defaultValue) ;

/// @brief Method GetInt_Injected, addr 0xb5d4364, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, int32_t  defaultValue) ;

/// @brief Method GetString, addr 0xb5d4934, size 0x48, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key) ;

/// @brief Method GetString, addr 0xb5d4630, size 0x2b0, virtual false, abstract: false, final false
static inline ::StringW GetString(::StringW  key, ::StringW  defaultValue) ;

/// @brief Method GetString_Injected, addr 0xb5d48e0, size 0x54, virtual false, abstract: false, final false
static inline void GetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  defaultValue, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method HasKey, addr 0xb5d497c, size 0x174, virtual false, abstract: false, final false
static inline bool HasKey(::StringW  key) ;

/// @brief Method HasKey_Injected, addr 0xb5d4af0, size 0x3c, virtual false, abstract: false, final false
static inline bool HasKey_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key) ;

/// [NativeMethod("Sync")]
/// @brief Method Save, addr 0xb5d4cd0, size 0x28, virtual false, abstract: false, final false
static inline void Save() ;

/// @brief Method SetFloat, addr 0xb5d43b0, size 0x58, virtual false, abstract: false, final false
static inline void SetFloat(::StringW  key, float_t  value) ;

/// @brief Method SetInt, addr 0xb5d4194, size 0x58, virtual false, abstract: false, final false
static inline void SetInt(::StringW  key, int32_t  value) ;

/// @brief Method SetString, addr 0xb5d45d8, size 0x58, virtual false, abstract: false, final false
static inline void SetString(::StringW  key, ::StringW  value) ;

/// [NativeMethod("SetFloat")]
/// @brief Method TrySetFloat, addr 0xb5d3d44, size 0x184, virtual false, abstract: false, final false
static inline bool TrySetFloat(::StringW  key, float_t  value) ;

/// @brief Method TrySetFloat_Injected, addr 0xb5d3ec8, size 0x4c, virtual false, abstract: false, final false
static inline bool TrySetFloat_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, float_t  value) ;

/// [NativeMethod("SetInt")]
/// @brief Method TrySetInt, addr 0xb5d3b84, size 0x17c, virtual false, abstract: false, final false
static inline bool TrySetInt(::StringW  key, int32_t  value) ;

/// @brief Method TrySetInt_Injected, addr 0xb5d3d00, size 0x44, virtual false, abstract: false, final false
static inline bool TrySetInt_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, int32_t  value) ;

/// [NativeMethod("SetString")]
/// @brief Method TrySetSetString, addr 0xb5d3f14, size 0x23c, virtual false, abstract: false, final false
static inline bool TrySetSetString(::StringW  key, ::StringW  value) ;

/// @brief Method TrySetSetString_Injected, addr 0xb5d4150, size 0x44, virtual false, abstract: false, final false
static inline bool TrySetSetString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  key, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPrefs(PlayerPrefs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPrefs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPrefs(PlayerPrefs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerPrefs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
