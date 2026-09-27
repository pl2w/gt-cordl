#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocaleIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocaleIdentifier)
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::LocaleIdentifier);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocaleIdentifier, "UnityEngine.Localization", "LocaleIdentifier");
// Dependencies 
namespace UnityEngine::Localization {
// Is value type: true
// CS Name: UnityEngine.Localization.LocaleIdentifier
struct CORDL_TYPE LocaleIdentifier {
public:
// Declarations
 __declspec(property(get=get_Code)) ::StringW  Code;

 __declspec(property(get=get_CultureInfo)) ::System::Globalization::CultureInfo*  CultureInfo;

/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr operator  ::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>*() ;

/// @brief Method CompareTo, addr 0xb00d7d4, size 0x88, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::Localization::LocaleIdentifier  other) ;

/// @brief Method Equals, addr 0xb00d664, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb00d6e0, size 0x5c, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Localization::LocaleIdentifier  other) ;

/// @brief Method GetHashCode, addr 0xb00d73c, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb00d584, size 0xe0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb00d1ac, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::StringW  code) ;

/// @brief Method .ctor, addr 0xb00d1d0, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method .ctor, addr 0xb00d264, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::SystemLanguage  systemLanguage) ;

/// @brief Method get_Code, addr 0xb00d0a0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Code() ;

/// @brief Method get_CultureInfo, addr 0xb00d0a8, size 0x104, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_CultureInfo() ;

/// @brief Convert to "::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr ::System::IComparable_1<::UnityEngine::Localization::LocaleIdentifier>* i___System__IComparable_1___UnityEngine__Localization__LocaleIdentifier_() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>"
constexpr ::System::IEquatable_1<::UnityEngine::Localization::LocaleIdentifier>* i___System__IEquatable_1___UnityEngine__Localization__LocaleIdentifier_() ;

/// @brief Method op_Equality, addr 0xb00d85c, size 0x2c, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Localization::LocaleIdentifier  l1, ::UnityEngine::Localization::LocaleIdentifier  l2) ;

/// @brief Method op_Implicit, addr 0xb00d4f8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::LocaleIdentifier op_Implicit___UnityEngine__Localization__LocaleIdentifier(::StringW  code) ;

/// @brief Method op_Implicit, addr 0xb00d534, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::LocaleIdentifier op_Implicit___UnityEngine__Localization__LocaleIdentifier(::System::Globalization::CultureInfo*  culture) ;

/// @brief Method op_Implicit, addr 0xb00d55c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::LocaleIdentifier op_Implicit___UnityEngine__Localization__LocaleIdentifier(::UnityEngine::SystemLanguage  systemLanguage) ;

/// @brief Method op_Inequality, addr 0xb00d888, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Localization::LocaleIdentifier  l1, ::UnityEngine::Localization::LocaleIdentifier  l2) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocaleIdentifier() ;

// Ctor Parameters [CppParam { name: "m_Code", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CultureInfo", ty: "::System::Globalization::CultureInfo*", modifiers: "", def_value: None, comment: None }]
constexpr LocaleIdentifier(::StringW  m_Code, ::System::Globalization::CultureInfo*  m_CultureInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field m_Code, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_Code;

/// @brief Field m_CultureInfo, offset: 0x8, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  m_CultureInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocaleIdentifier, m_Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocaleIdentifier, m_CultureInfo) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocaleIdentifier) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
