#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/PreserveTags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PreserveTags)
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
namespace UnityEngine::Localization::Pseudo {
class Message;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class PreserveTags;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::PreserveTags*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::PreserveTags*, "UnityEngine.Localization.Pseudo", "PreserveTags");
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.PreserveTags
class CORDL_TYPE PreserveTags : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Closing, put=set_Closing)) char16_t  Closing;

 __declspec(property(get=get_Opening, put=set_Opening)) char16_t  Opening;

/// @brief Field m_Closing, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_Closing, put=__cordl_internal_set_m_Closing)) char16_t  m_Closing;

/// @brief Field m_Opening, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_Opening, put=__cordl_internal_set_m_Opening)) char16_t  m_Opening;

/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr operator  ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept;

static inline ::UnityEngine::Localization::Pseudo::PreserveTags* New_ctor() ;

/// @brief Method Transform, addr 0xb025f84, size 0x514, virtual true, abstract: false, final true
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

constexpr char16_t const& __cordl_internal_get_m_Closing() const;

constexpr char16_t& __cordl_internal_get_m_Closing() ;

constexpr char16_t const& __cordl_internal_get_m_Opening() const;

constexpr char16_t& __cordl_internal_get_m_Opening() ;

constexpr void __cordl_internal_set_m_Closing(char16_t  value) ;

constexpr void __cordl_internal_set_m_Opening(char16_t  value) ;

/// @brief Method .ctor, addr 0xb026498, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Closing, addr 0xb025f74, size 0x8, virtual false, abstract: false, final false
inline char16_t get_Closing() ;

/// @brief Method get_Opening, addr 0xb025f64, size 0x8, virtual false, abstract: false, final false
inline char16_t get_Opening() ;

/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept;

/// @brief Method set_Closing, addr 0xb025f7c, size 0x8, virtual false, abstract: false, final false
inline void set_Closing(char16_t  value) ;

/// @brief Method set_Opening, addr 0xb025f6c, size 0x8, virtual false, abstract: false, final false
inline void set_Opening(char16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreserveTags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreserveTags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreserveTags(PreserveTags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreserveTags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreserveTags(PreserveTags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25131};

/// [SerializeField]
/// @brief Field m_Opening, offset: 0x10, size: 0x2, def value: None
 char16_t  ___m_Opening;

/// [SerializeField]
/// @brief Field m_Closing, offset: 0x12, size: 0x2, def value: None
 char16_t  ___m_Closing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::PreserveTags, ___m_Opening) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::PreserveTags, ___m_Closing) == 0x12, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::PreserveTags) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
