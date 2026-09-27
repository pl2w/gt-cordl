#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions)
namespace GlobalNamespace {
class BindingRestrictions_CustomRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_InstanceRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_MergedRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_TypeRestriction;
}
namespace GlobalNamespace {
struct TestBuilder_BindingRestrictions_AndNode;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Dynamic {
class BindingRestrictions_BindingRestrictionsProxy;
}
namespace System::Dynamic {
class BindingRestrictions_TestBuilder;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Dynamic {
class BindingRestrictions_BindingRestrictionsProxy;
}
namespace System::Dynamic {
class BindingRestrictions_TestBuilder;
}
// Write type traits
MARK_REF_T(::System::Dynamic::BindingRestrictions*);
MARK_REF_T(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy*);
MARK_REF_T(::System::Dynamic::BindingRestrictions_TestBuilder*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::BindingRestrictions*, "System.Dynamic", "BindingRestrictions");
DEFINE_IL2CPP_CLASS(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy*, "System.Dynamic", "BindingRestrictions/BindingRestrictionsProxy");
DEFINE_IL2CPP_CLASS(::System::Dynamic::BindingRestrictions_TestBuilder*, "System.Dynamic", "BindingRestrictions/TestBuilder");
// [DebuggerTypeProxy(typeof(System.Dynamic.BindingRestrictions::BindingRestrictionsProxy))]
// [DebuggerDisplay("{DebugView}")]
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions
class CORDL_TYPE BindingRestrictions : public ::System::Object {
public:
// Declarations
using CustomRestriction = ::GlobalNamespace::BindingRestrictions_CustomRestriction;

using InstanceRestriction = ::GlobalNamespace::BindingRestrictions_InstanceRestriction;

using MergedRestriction = ::GlobalNamespace::BindingRestrictions_MergedRestriction;

using TypeRestriction = ::GlobalNamespace::BindingRestrictions_TypeRestriction;

using BindingRestrictionsProxy = ::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy;

using TestBuilder = ::System::Dynamic::BindingRestrictions_TestBuilder;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Dynamic::BindingRestrictions*  Empty;

/// @brief Method GetExpression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Linq::Expressions::Expression* GetExpression() ;

/// @brief Method GetInstanceRestriction, addr 0xa8be5b0, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Dynamic::BindingRestrictions* GetInstanceRestriction(::System::Linq::Expressions::Expression*  expression, ::System::Object*  instance) ;

/// @brief Method GetTypeRestriction, addr 0xa8be328, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method GetTypeRestriction, addr 0xa8be468, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Dynamic::DynamicMetaObject*  obj) ;

/// @brief Method Merge, addr 0xa8be1b0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Dynamic::BindingRestrictions* Merge(::System::Dynamic::BindingRestrictions*  restrictions) ;

static inline ::System::Dynamic::BindingRestrictions* New_ctor() ;

/// @brief Method ToExpression, addr 0xa8be6f8, size 0xc, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Expression* ToExpression() ;

/// @brief Method .ctor, addr 0xa8be1a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Dynamic::BindingRestrictions* getStaticF_Empty() ;

static inline void setStaticF_Empty(::System::Dynamic::BindingRestrictions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindingRestrictions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingRestrictions(BindingRestrictions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingRestrictions(BindingRestrictions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::BindingRestrictions) == 0x10, "Size mismatch!");

} // namespace end def System::Dynamic
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/BindingRestrictionsProxy
class CORDL_TYPE BindingRestrictions_BindingRestrictionsProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindingRestrictions_BindingRestrictionsProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_BindingRestrictionsProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingRestrictions_BindingRestrictionsProxy(BindingRestrictions_BindingRestrictionsProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_BindingRestrictionsProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingRestrictions_BindingRestrictionsProxy(BindingRestrictions_BindingRestrictionsProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy) == 0x10, "Size mismatch!");

} // namespace end def System::Dynamic
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/TestBuilder
class CORDL_TYPE BindingRestrictions_TestBuilder : public ::System::Object {
public:
// Declarations
using AndNode = ::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode;

/// @brief Field _tests, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tests, put=__cordl_internal_set__tests)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode>*  _tests;

/// @brief Field _unique, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__unique, put=__cordl_internal_set__unique)) ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*  _unique;

/// @brief Method Append, addr 0xa8be82c, size 0x8c, virtual false, abstract: false, final false
inline void Append(::System::Dynamic::BindingRestrictions*  restrictions) ;

static inline ::System::Dynamic::BindingRestrictions_TestBuilder* New_ctor() ;

/// @brief Method Push, addr 0xa8be8b8, size 0x154, virtual false, abstract: false, final false
inline void Push(::System::Linq::Expressions::Expression*  node, int32_t  depth) ;

/// @brief Method ToExpression, addr 0xa8bea0c, size 0xd4, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Expression* ToExpression() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode>* const& __cordl_internal_get__tests() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode>*& __cordl_internal_get__tests() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* const& __cordl_internal_get__unique() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& __cordl_internal_get__unique() ;

constexpr void __cordl_internal_set__tests(::System::Collections::Generic::Stack_1<::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode>*  value) ;

constexpr void __cordl_internal_set__unique(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*  value) ;

/// @brief Method .ctor, addr 0xa8beae0, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BindingRestrictions_TestBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TestBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BindingRestrictions_TestBuilder(BindingRestrictions_TestBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TestBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BindingRestrictions_TestBuilder(BindingRestrictions_TestBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24116};

/// @brief Field _unique, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*  ____unique;

/// @brief Field _tests, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode>*  ____tests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Dynamic::BindingRestrictions_TestBuilder, ____unique) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::BindingRestrictions_TestBuilder, ____tests) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Dynamic::BindingRestrictions_TestBuilder) == 0x20, "Size mismatch!");

} // namespace end def System::Dynamic
