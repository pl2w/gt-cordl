#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyNameCollection_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StylePropertyNameCollection_Enumerator)
namespace GlobalNamespace {
template<typename T>
struct List_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace GlobalNamespace {
struct StylePropertyNameCollection_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StylePropertyNameCollection_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StylePropertyNameCollection_Enumerator, "UnityEngine.UIElements", "StylePropertyNameCollection/Enumerator");
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, UnityEngine.UIElements.StylePropertyName
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyNameCollection/Enumerator
struct CORDL_TYPE StylePropertyNameCollection_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::StylePropertyName  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb89e530, size 0x48, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xb89e42c, size 0x48, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xb89e52c, size 0x4, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb89e4b0, size 0x7c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xb89e358, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>  enumerator) ;

/// @brief Method get_Current, addr 0xb89e474, size 0x3c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::StylePropertyName get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StylePropertyName>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__StylePropertyName_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr StylePropertyNameCollection_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>", modifiers: "", def_value: None, comment: None }]
constexpr StylePropertyNameCollection_Enumerator(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>  m_Enumerator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Enumerator, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::StylePropertyName>  m_Enumerator;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StylePropertyNameCollection_Enumerator, m_Enumerator) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StylePropertyNameCollection_Enumerator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
