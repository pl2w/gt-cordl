#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/XmlSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XmlSource)
namespace System::Xml::Linq {
class XElement;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class XmlSource___c__DisplayClass1_0;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class XmlSource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class XmlSource___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource*, "UnityEngine.Localization.SmartFormat.Extensions", "XmlSource");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0*, "UnityEngine.Localization.SmartFormat.Extensions", "XmlSource/<>c__DisplayClass1_0");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.XmlSource
class CORDL_TYPE XmlSource : public ::System::Object {
public:
// Declarations
using __c__DisplayClass1_0 = ::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::XmlSource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method TryEvaluateSelector, addr 0xb044858, size 0x2b0, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

/// @brief Method .ctor, addr 0xb0280b4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSource(XmlSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSource(XmlSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.XmlSource/<>c__DisplayClass1_0
class CORDL_TYPE XmlSource___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field selector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::StringW  selector;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <TryEvaluateSelector>b__0, addr 0xb044b10, size 0x2c, virtual false, abstract: false, final false
inline bool _TryEvaluateSelector_b__0(::System::Xml::Linq::XElement*  x) ;

constexpr ::StringW const& __cordl_internal_get_selector() const;

constexpr ::StringW& __cordl_internal_get_selector() ;

constexpr void __cordl_internal_set_selector(::StringW  value) ;

/// @brief Method .ctor, addr 0xb044b08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlSource___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlSource___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSource___c__DisplayClass1_0(XmlSource___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSource___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSource___c__DisplayClass1_0(XmlSource___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25208};

/// @brief Field selector, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___selector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0, ___selector) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::XmlSource___c__DisplayClass1_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
