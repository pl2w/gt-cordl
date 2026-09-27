#pragma once
// IWYU pragma private; include "Oculus/Interaction/UniqueIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ValueToClassDecorator_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniqueIdentifier)
namespace Oculus::Interaction {
class Context;
}
namespace Oculus::Interaction {
class Decorator_UniqueIdentifier___c;
}
namespace Oculus::Interaction {
class UniqueIdentifier_Decorator;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Oculus::Interaction {
class Decorator_UniqueIdentifier___c;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace Oculus::Interaction {
class UniqueIdentifier_Decorator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Decorator_UniqueIdentifier___c*);
MARK_REF_T(::Oculus::Interaction::UniqueIdentifier*);
MARK_REF_T(::Oculus::Interaction::UniqueIdentifier_Decorator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Decorator_UniqueIdentifier___c*, "Oculus.Interaction", "UniqueIdentifier/Decorator/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UniqueIdentifier*, "Oculus.Interaction", "UniqueIdentifier");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UniqueIdentifier_Decorator*, "Oculus.Interaction", "UniqueIdentifier/Decorator");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UniqueIdentifier
class CORDL_TYPE UniqueIdentifier : public ::System::Object {
public:
// Declarations
using Decorator = ::Oculus::Interaction::UniqueIdentifier_Decorator;

/// @brief Field Random, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Random, put=setStaticF_Random)) ::System::Random*  Random;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) int32_t  _ID_k__BackingField;

/// @brief Field _context, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::UnityW<::Oculus::Interaction::Context>  _context;

 __declspec(property(get=get_ID, put=set_ID)) int32_t  _cordl_ID;

/// @brief Field _identifierSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__identifierSet, put=setStaticF__identifierSet)) ::System::Collections::Generic::HashSet_1<int32_t>*  _identifierSet;

/// [Obsolete]
/// @brief Method Generate, addr 0xa443aec, size 0x194, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::UniqueIdentifier* Generate() ;

/// @brief Method Generate, addr 0xa443c80, size 0x160, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::UniqueIdentifier* Generate(::Oculus::Interaction::Context*  context, ::System::Object*  instance) ;

/// @brief Method GetInstanceFromIdentifierAsync, addr 0xa443ffc, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Object*>* GetInstanceFromIdentifierAsync(::Oculus::Interaction::Context*  context, int32_t  identifier) ;

static inline ::Oculus::Interaction::UniqueIdentifier* New_ctor(int32_t  identifier, ::Oculus::Interaction::Context*  context) ;

/// @brief Method Release, addr 0xa443ee0, size 0xb0, virtual false, abstract: false, final false
static inline void Release(::Oculus::Interaction::UniqueIdentifier*  identifier) ;

/// @brief Method TryGetInstanceFromIdentifier, addr 0xa443f90, size 0x6c, virtual false, abstract: false, final false
static inline bool TryGetInstanceFromIdentifier(::Oculus::Interaction::Context*  context, int32_t  identifier, ::by_ref<::System::Object*>  instance) ;

constexpr int32_t const& __cordl_internal_get__ID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::UnityW<::Oculus::Interaction::Context> const& __cordl_internal_get__context() const;

constexpr ::UnityW<::Oculus::Interaction::Context>& __cordl_internal_get__context() ;

constexpr void __cordl_internal_set__ID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__context(::UnityW<::Oculus::Interaction::Context>  value) ;

/// @brief Method .ctor, addr 0xa443ab4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::Oculus::Interaction::Context*  context) ;

static inline ::System::Random* getStaticF_Random() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF__identifierSet() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0xa443aa4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ID() ;

static inline void setStaticF_Random(::System::Random*  value) ;

static inline void setStaticF__identifierSet(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0xa443aac, size 0x8, virtual false, abstract: false, final false
inline void set_ID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueIdentifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueIdentifier(UniqueIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueIdentifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueIdentifier(UniqueIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15804};

/// [CompilerGenerated]
/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____ID_k__BackingField;

/// @brief Field _context, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Context>  ____context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UniqueIdentifier, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UniqueIdentifier, ____context) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UniqueIdentifier) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.ValueToClassDecorator`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UniqueIdentifier/Decorator
class CORDL_TYPE UniqueIdentifier_Decorator : public ::Oculus::Interaction::ValueToClassDecorator_2<int32_t,::System::Object*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Decorator_UniqueIdentifier___c;

/// @brief Method GetFromContext, addr 0xa443de0, size 0x100, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::UniqueIdentifier_Decorator* GetFromContext(::Oculus::Interaction::Context*  context) ;

static inline ::Oculus::Interaction::UniqueIdentifier_Decorator* New_ctor() ;

/// @brief Method .ctor, addr 0xa44412c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueIdentifier_Decorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueIdentifier_Decorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueIdentifier_Decorator(UniqueIdentifier_Decorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueIdentifier_Decorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueIdentifier_Decorator(UniqueIdentifier_Decorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UniqueIdentifier_Decorator) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UniqueIdentifier/Decorator/<>c
class CORDL_TYPE Decorator_UniqueIdentifier___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Decorator_UniqueIdentifier___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*  __9__1_0;

static inline ::Oculus::Interaction::Decorator_UniqueIdentifier___c* New_ctor() ;

/// @brief Method <GetFromContext>b__1_0, addr 0xa4441e4, size 0x50, virtual false, abstract: false, final false
inline ::Oculus::Interaction::UniqueIdentifier_Decorator* _GetFromContext_b__1_0() ;

/// @brief Method .ctor, addr 0xa4441dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Decorator_UniqueIdentifier___c* getStaticF___9() ;

static inline ::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Decorator_UniqueIdentifier___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::UniqueIdentifier_Decorator*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decorator_UniqueIdentifier___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decorator_UniqueIdentifier___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Decorator_UniqueIdentifier___c(Decorator_UniqueIdentifier___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decorator_UniqueIdentifier___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decorator_UniqueIdentifier___c(Decorator_UniqueIdentifier___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Decorator_UniqueIdentifier___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
