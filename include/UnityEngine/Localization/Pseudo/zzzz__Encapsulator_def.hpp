#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/Encapsulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Encapsulator)
namespace UnityEngine::Localization::Pseudo {
class IPseudoLocalizationMethod;
}
namespace UnityEngine::Localization::Pseudo {
class Message;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class Encapsulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::Encapsulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::Encapsulator*, "UnityEngine.Localization.Pseudo", "Encapsulator");
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.Encapsulator
class CORDL_TYPE Encapsulator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_End, put=set_End)) ::StringW  End;

 __declspec(property(get=get_Start, put=set_Start)) ::StringW  Start;

/// @brief Field m_End, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_End, put=__cordl_internal_set_m_End)) ::StringW  m_End;

/// @brief Field m_Start, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Start, put=__cordl_internal_set_m_Start)) ::StringW  m_Start;

/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr operator  ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept;

static inline ::UnityEngine::Localization::Pseudo::Encapsulator* New_ctor() ;

/// @brief Method Transform, addr 0xb024644, size 0x100, virtual true, abstract: false, final true
inline void Transform(::UnityEngine::Localization::Pseudo::Message*  message) ;

constexpr ::StringW const& __cordl_internal_get_m_End() const;

constexpr ::StringW& __cordl_internal_get_m_End() ;

constexpr ::StringW const& __cordl_internal_get_m_Start() const;

constexpr ::StringW& __cordl_internal_get_m_Start() ;

constexpr void __cordl_internal_set_m_End(::StringW  value) ;

constexpr void __cordl_internal_set_m_Start(::StringW  value) ;

/// @brief Method .ctor, addr 0xb024744, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_End, addr 0xb024634, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_End() ;

/// @brief Method get_Start, addr 0xb024624, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Start() ;

/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept;

/// @brief Method set_End, addr 0xb02463c, size 0x8, virtual false, abstract: false, final false
inline void set_End(::StringW  value) ;

/// @brief Method set_Start, addr 0xb02462c, size 0x8, virtual false, abstract: false, final false
inline void set_Start(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Encapsulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Encapsulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Encapsulator(Encapsulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Encapsulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Encapsulator(Encapsulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25126};

/// [SerializeField]
/// @brief Field m_Start, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Start;

/// [SerializeField]
/// @brief Field m_End, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Pseudo::Encapsulator, ___m_Start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Pseudo::Encapsulator, ___m_End) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Pseudo::Encapsulator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
