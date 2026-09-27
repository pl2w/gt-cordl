#pragma once
// IWYU pragma private; include "System/Xml/Linq/XContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__NamespaceCache_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XContainer)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
struct LoadOptions;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XContainer_ContentReader;
}
namespace System::Xml::Linq {
class XContainer__GetElements_d__39;
}
namespace System::Xml::Linq {
class XContainer__Nodes_d__18;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Xml::Linq {
class XContainer_ContentReader;
}
namespace System::Xml::Linq {
class XContainer__GetElements_d__39;
}
namespace System::Xml::Linq {
class XContainer__Nodes_d__18;
}
// Write type traits
MARK_REF_T(::System::Xml::Linq::XContainer*);
MARK_REF_T(::System::Xml::Linq::XContainer_ContentReader*);
MARK_REF_T(::System::Xml::Linq::XContainer__GetElements_d__39*);
MARK_REF_T(::System::Xml::Linq::XContainer__Nodes_d__18*);
DEFINE_IL2CPP_CLASS(::System::Xml::Linq::XContainer*, "System.Xml.Linq", "XContainer");
DEFINE_IL2CPP_CLASS(::System::Xml::Linq::XContainer_ContentReader*, "System.Xml.Linq", "XContainer/ContentReader");
DEFINE_IL2CPP_CLASS(::System::Xml::Linq::XContainer__GetElements_d__39*, "System.Xml.Linq", "XContainer/<GetElements>d__39");
DEFINE_IL2CPP_CLASS(::System::Xml::Linq::XContainer__Nodes_d__18*, "System.Xml.Linq", "XContainer/<Nodes>d__18");
// Dependencies System.Xml.Linq.XNode
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer
class CORDL_TYPE XContainer : public ::System::Xml::Linq::XNode {
public:
// Declarations
using ContentReader = ::System::Xml::Linq::XContainer_ContentReader;

using _GetElements_d__39 = ::System::Xml::Linq::XContainer__GetElements_d__39;

using _Nodes_d__18 = ::System::Xml::Linq::XContainer__Nodes_d__18;

 __declspec(property(get=get_LastNode)) ::System::Xml::Linq::XNode*  LastNode;

/// @brief Field content, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::System::Object*  content;

/// @brief Method Add, addr 0xaaadf4c, size 0x3e0, virtual false, abstract: false, final false
inline void Add(::System::Object*  content) ;

/// @brief Method AddAttribute, addr 0xaaaec40, size 0x4, virtual true, abstract: false, final false
inline void AddAttribute(::System::Xml::Linq::XAttribute*  a) ;

/// @brief Method AddAttributeSkipNotify, addr 0xaaaec44, size 0x4, virtual true, abstract: false, final false
inline void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute*  a) ;

/// @brief Method AddContentSkipNotify, addr 0xaaae39c, size 0x3b8, virtual false, abstract: false, final false
inline void AddContentSkipNotify(::System::Object*  content) ;

/// @brief Method AddNode, addr 0xaaae754, size 0x80, virtual false, abstract: false, final false
inline void AddNode(::System::Xml::Linq::XNode*  n) ;

/// @brief Method AddNodeSkipNotify, addr 0xaaaec48, size 0x80, virtual false, abstract: false, final false
inline void AddNodeSkipNotify(::System::Xml::Linq::XNode*  n) ;

/// @brief Method AddString, addr 0xaaae7d4, size 0x28c, virtual false, abstract: false, final false
inline void AddString(::StringW  s) ;

/// @brief Method AddStringSkipNotify, addr 0xaaaecc8, size 0x17c, virtual false, abstract: false, final false
inline void AddStringSkipNotify(::StringW  s) ;

/// @brief Method AppendNode, addr 0xaaaef20, size 0x114, virtual false, abstract: false, final false
inline void AppendNode(::System::Xml::Linq::XNode*  n) ;

/// @brief Method AppendNodeSkipNotify, addr 0xaaadd24, size 0xe0, virtual false, abstract: false, final false
inline void AppendNodeSkipNotify(::System::Xml::Linq::XNode*  n) ;

/// @brief Method AppendText, addr 0xaaaf298, size 0xdc, virtual true, abstract: false, final false
inline void AppendText(::System::Text::StringBuilder*  sb) ;

/// @brief Method ConvertTextToNode, addr 0xaaaee44, size 0xdc, virtual false, abstract: false, final false
inline void ConvertTextToNode() ;

/// @brief Method Elements, addr 0xaaaeae8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* Elements() ;

/// [IteratorStateMachine(typeof(System.Xml.Linq.XContainer::<GetElements>d__39))]
/// @brief Method GetElements, addr 0xaaaeaf0, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* GetElements(::System::Xml::Linq::XName*  name) ;

/// @brief Method GetStringValue, addr 0xaaacac4, size 0x384, virtual false, abstract: false, final false
static inline ::StringW GetStringValue(::System::Object*  value) ;

static inline ::System::Xml::Linq::XContainer* New_ctor() ;

static inline ::System::Xml::Linq::XContainer* New_ctor(::System::Xml::Linq::XContainer*  other) ;

/// [IteratorStateMachine(typeof(System.Xml.Linq.XContainer::<Nodes>d__18))]
/// @brief Method Nodes, addr 0xaaaeb8c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes() ;

/// @brief Method ReadContentFrom, addr 0xaaaf3a8, size 0x100, virtual false, abstract: false, final false
inline void ReadContentFrom(::System::Xml::XmlReader*  r) ;

/// @brief Method ReadContentFrom, addr 0xaaafad4, size 0x128, virtual false, abstract: false, final false
inline void ReadContentFrom(::System::Xml::XmlReader*  r, ::System::Xml::Linq::LoadOptions  o) ;

/// @brief Method RemoveNode, addr 0xaab0908, size 0x1e0, virtual false, abstract: false, final false
inline void RemoveNode(::System::Xml::Linq::XNode*  n) ;

/// @brief Method ValidateNode, addr 0xaab0ae8, size 0x4, virtual true, abstract: false, final false
inline void ValidateNode(::System::Xml::Linq::XNode*  node, ::System::Xml::Linq::XNode*  previous) ;

/// @brief Method ValidateString, addr 0xaab0aec, size 0x4, virtual true, abstract: false, final false
inline void ValidateString(::StringW  s) ;

/// @brief Method WriteContentTo, addr 0xaab0af0, size 0x140, virtual false, abstract: false, final false
inline void WriteContentTo(::System::Xml::XmlWriter*  writer) ;

constexpr ::System::Object* const& __cordl_internal_get_content() const;

constexpr ::System::Object*& __cordl_internal_get_content() ;

constexpr void __cordl_internal_set_content(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xaaadbe4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xaaadbec, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Linq::XContainer*  other) ;

/// @brief Method get_LastNode, addr 0xaaade04, size 0x148, virtual false, abstract: false, final false
inline ::System::Xml::Linq::XNode* get_LastNode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XContainer(XContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XContainer(XContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32017};

/// @brief Field content, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer, ___content) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Linq::XContainer) == 0x30, "Size mismatch!");

} // namespace end def System::Xml::Linq
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer/<GetElements>d__39
class CORDL_TYPE XContainer__GetElements_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Xml_Linq_XElement__get_Current)) ::System::Xml::Linq::XElement*  System_Collections_Generic_IEnumerator_System_Xml_Linq_XElement__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Xml::Linq::XElement*  __2__current;

/// @brief Field <>3__name, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__name, put=__cordl_internal_set___3__name)) ::System::Xml::Linq::XName*  __3__name;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Xml::Linq::XContainer*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <n>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__n_5__2, put=__cordl_internal_set__n_5__2)) ::System::Xml::Linq::XNode*  _n_5__2;

/// @brief Field name, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::System::Xml::Linq::XName*  name;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaab1304, size 0x1b8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::System::Xml::Linq::XContainer__GetElements_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator, addr 0xaab1504, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XElement__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current, addr 0xaab14bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Linq::XElement* System_Collections_Generic_IEnumerator_System_Xml_Linq_XElement__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaab15b8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaab14c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaab14fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaab1300, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Xml::Linq::XElement* const& __cordl_internal_get___2__current() const;

constexpr ::System::Xml::Linq::XElement*& __cordl_internal_get___2__current() ;

constexpr ::System::Xml::Linq::XName* const& __cordl_internal_get___3__name() const;

constexpr ::System::Xml::Linq::XName*& __cordl_internal_get___3__name() ;

constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get___4__this() const;

constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get__n_5__2() const;

constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get__n_5__2() ;

constexpr ::System::Xml::Linq::XName* const& __cordl_internal_get_name() const;

constexpr ::System::Xml::Linq::XName*& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Xml::Linq::XElement*  value) ;

constexpr void __cordl_internal_set___3__name(::System::Xml::Linq::XName*  value) ;

constexpr void __cordl_internal_set___4__this(::System::Xml::Linq::XContainer*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__n_5__2(::System::Xml::Linq::XNode*  value) ;

constexpr void __cordl_internal_set_name(::System::Xml::Linq::XName*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaaaf374, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XElement*>* i___System__Collections__Generic__IEnumerable_1___System__Xml__Linq__XElement__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XElement*>* i___System__Collections__Generic__IEnumerator_1___System__Xml__Linq__XElement__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XContainer__GetElements_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XContainer__GetElements_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XContainer__GetElements_d__39(XContainer__GetElements_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XContainer__GetElements_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XContainer__GetElements_d__39(XContainer__GetElements_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32016};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Linq::XElement*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Linq::XContainer*  _____4__this;

/// @brief Field name, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::Linq::XName*  ___name;

/// @brief Field <>3__name, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::Linq::XName*  _____3__name;

/// @brief Field <n>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Xml::Linq::XNode*  ____n_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, _____3__name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__GetElements_d__39, ____n_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Linq::XContainer__GetElements_d__39) == 0x48, "Size mismatch!");

} // namespace end def System::Xml::Linq
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer/<Nodes>d__18
class CORDL_TYPE XContainer__Nodes_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current)) ::System::Xml::Linq::XNode*  System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Xml::Linq::XNode*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Xml::Linq::XContainer*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <n>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__n_5__2, put=__cordl_internal_set__n_5__2)) ::System::Xml::Linq::XNode*  _n_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xaab1150, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::System::Xml::Linq::XContainer__Nodes_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator, addr 0xaab1258, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current, addr 0xaab1210, size 0x8, virtual true, abstract: false, final true
inline ::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaab12fc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xaab1218, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaab1250, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xaab114c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get___2__current() const;

constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get___2__current() ;

constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get___4__this() const;

constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get__n_5__2() const;

constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get__n_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Xml::Linq::XNode*  value) ;

constexpr void __cordl_internal_set___4__this(::System::Xml::Linq::XContainer*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__n_5__2(::System::Xml::Linq::XNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xaaaec0c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerable_1___System__Xml__Linq__XNode__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerator_1___System__Xml__Linq__XNode__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XContainer__Nodes_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XContainer__Nodes_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XContainer__Nodes_d__18(XContainer__Nodes_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XContainer__Nodes_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XContainer__Nodes_d__18(XContainer__Nodes_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32015};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Xml::Linq::XNode*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Linq::XContainer*  _____4__this;

/// @brief Field <n>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::Linq::XNode*  ____n_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, ____n_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Linq::XContainer__Nodes_d__18) == 0x38, "Size mismatch!");

} // namespace end def System::Xml::Linq
// Dependencies System.Object, System.Xml.Linq.NamespaceCache
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer/ContentReader
class CORDL_TYPE XContainer_ContentReader : public ::System::Object {
public:
// Declarations
/// @brief Field _aCache, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__aCache, put=__cordl_internal_set__aCache)) ::System::Xml::Linq::NamespaceCache  _aCache;

/// @brief Field _baseUri, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseUri, put=__cordl_internal_set__baseUri)) ::StringW  _baseUri;

/// @brief Field _currentContainer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentContainer, put=__cordl_internal_set__currentContainer)) ::System::Xml::Linq::XContainer*  _currentContainer;

/// @brief Field _eCache, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__eCache, put=__cordl_internal_set__eCache)) ::System::Xml::Linq::NamespaceCache  _eCache;

/// @brief Field _lineInfo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineInfo, put=__cordl_internal_set__lineInfo)) ::System::Xml::IXmlLineInfo*  _lineInfo;

static inline ::System::Xml::Linq::XContainer_ContentReader* New_ctor(::System::Xml::Linq::XContainer*  rootContainer) ;

static inline ::System::Xml::Linq::XContainer_ContentReader* New_ctor(::System::Xml::Linq::XContainer*  rootContainer, ::System::Xml::XmlReader*  r, ::System::Xml::Linq::LoadOptions  o) ;

/// @brief Method ReadContentFrom, addr 0xaaaf4d8, size 0x5fc, virtual false, abstract: false, final false
inline bool ReadContentFrom(::System::Xml::Linq::XContainer*  rootContainer, ::System::Xml::XmlReader*  r) ;

/// @brief Method ReadContentFrom, addr 0xaaafcc4, size 0xc44, virtual false, abstract: false, final false
inline bool ReadContentFrom(::System::Xml::Linq::XContainer*  rootContainer, ::System::Xml::XmlReader*  r, ::System::Xml::Linq::LoadOptions  o) ;

constexpr ::System::Xml::Linq::NamespaceCache const& __cordl_internal_get__aCache() const;

constexpr ::System::Xml::Linq::NamespaceCache& __cordl_internal_get__aCache() ;

constexpr ::StringW const& __cordl_internal_get__baseUri() const;

constexpr ::StringW& __cordl_internal_get__baseUri() ;

constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get__currentContainer() const;

constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get__currentContainer() ;

constexpr ::System::Xml::Linq::NamespaceCache const& __cordl_internal_get__eCache() const;

constexpr ::System::Xml::Linq::NamespaceCache& __cordl_internal_get__eCache() ;

constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get__lineInfo() const;

constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get__lineInfo() ;

constexpr void __cordl_internal_set__aCache(::System::Xml::Linq::NamespaceCache  value) ;

constexpr void __cordl_internal_set__baseUri(::StringW  value) ;

constexpr void __cordl_internal_set__currentContainer(::System::Xml::Linq::XContainer*  value) ;

constexpr void __cordl_internal_set__eCache(::System::Xml::Linq::NamespaceCache  value) ;

constexpr void __cordl_internal_set__lineInfo(::System::Xml::IXmlLineInfo*  value) ;

/// @brief Method .ctor, addr 0xaaaf4a8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Linq::XContainer*  rootContainer) ;

/// @brief Method .ctor, addr 0xaaafbfc, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Linq::XContainer*  rootContainer, ::System::Xml::XmlReader*  r, ::System::Xml::Linq::LoadOptions  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XContainer_ContentReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XContainer_ContentReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XContainer_ContentReader(XContainer_ContentReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XContainer_ContentReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XContainer_ContentReader(XContainer_ContentReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32014};

/// @brief Field _eCache, offset: 0x10, size: 0x10, def value: None
 ::System::Xml::Linq::NamespaceCache  ____eCache;

/// @brief Field _aCache, offset: 0x20, size: 0x10, def value: None
 ::System::Xml::Linq::NamespaceCache  ____aCache;

/// @brief Field _lineInfo, offset: 0x30, size: 0x8, def value: None
 ::System::Xml::IXmlLineInfo*  ____lineInfo;

/// @brief Field _currentContainer, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::Linq::XContainer*  ____currentContainer;

/// @brief Field _baseUri, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____baseUri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____eCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____aCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____lineInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____currentContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____baseUri) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Linq::XContainer_ContentReader) == 0x48, "Size mismatch!");

} // namespace end def System::Xml::Linq
