#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/DictionarySource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DictionarySource)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class DictionarySource___c__DisplayClass1_0;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class DictionarySource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class DictionarySource___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource*, "UnityEngine.Localization.SmartFormat.Extensions", "DictionarySource");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0*, "UnityEngine.Localization.SmartFormat.Extensions", "DictionarySource/<>c__DisplayClass1_0");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.DictionarySource
class CORDL_TYPE DictionarySource : public ::System::Object {
public:
// Declarations
using __c__DisplayClass1_0 = ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method TryEvaluateSelector, addr 0xb03bd34, size 0x720, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

/// @brief Method .ctor, addr 0xb027ff4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionarySource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionarySource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionarySource(DictionarySource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionarySource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionarySource(DictionarySource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.DictionarySource/<>c__DisplayClass1_0
class CORDL_TYPE DictionarySource___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field selector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::StringW  selector;

/// @brief Field selectorInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectorInfo, put=__cordl_internal_set_selectorInfo)) ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <TryEvaluateSelector>b__0, addr 0xb03c4f4, size 0xe4, virtual false, abstract: false, final false
inline bool _TryEvaluateSelector_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  x) ;

constexpr ::StringW const& __cordl_internal_get_selector() const;

constexpr ::StringW& __cordl_internal_get_selector() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo* const& __cordl_internal_get_selectorInfo() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*& __cordl_internal_get_selectorInfo() ;

constexpr void __cordl_internal_set_selector(::StringW  value) ;

constexpr void __cordl_internal_set_selectorInfo(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  value) ;

/// @brief Method .ctor, addr 0xb03c454, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionarySource___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionarySource___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionarySource___c__DisplayClass1_0(DictionarySource___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionarySource___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionarySource___c__DisplayClass1_0(DictionarySource___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25186};

/// @brief Field selector, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___selector;

/// @brief Field selectorInfo, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  ___selectorInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0, ___selector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0, ___selectorInfo) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::DictionarySource___c__DisplayClass1_0) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
