#pragma once
// IWYU pragma private; include "Meta/WitAi/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentBag_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Meta::WitAi {
template<typename T>
class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::WitAi::ObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::ObjectPool_1, "Meta.WitAi", "ObjectPool`1");
// Dependencies System.Object
namespace Meta::WitAi {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field _available, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__available, put=__cordl_internal_set__available)) ::System::Collections::Concurrent::ConcurrentBag_1<T>*  _available;

/// @brief Field _generator, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__generator, put=__cordl_internal_set__generator)) ::System::Func_1<T>*  _generator;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get() ;

static inline ::Meta::WitAi::ObjectPool_1<T>* New_ctor(::System::Func_1<T>*  generator, int32_t  preload) ;

/// @brief Method Preload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Preload(int32_t  total) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return(T  item) ;

constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>* const& __cordl_internal_get__available() const;

constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>*& __cordl_internal_get__available() ;

constexpr ::System::Func_1<T>* const& __cordl_internal_get__generator() const;

constexpr ::System::Func_1<T>*& __cordl_internal_get__generator() ;

constexpr void __cordl_internal_set__available(::System::Collections::Concurrent::ConcurrentBag_1<T>*  value) ;

constexpr void __cordl_internal_set__generator(::System::Func_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<T>*  generator, int32_t  preload) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30986};

/// @brief Field _generator, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<T>*  ____generator;

/// @brief Field _available, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentBag_1<T>*  ____available;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi
