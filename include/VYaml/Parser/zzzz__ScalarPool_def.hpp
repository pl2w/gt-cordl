#pragma once
// IWYU pragma private; include "VYaml/Parser/ScalarPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScalarPool)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace VYaml::Parser {
class Scalar;
}
// Forward declare root types
namespace VYaml::Parser {
class ScalarPool;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::ScalarPool*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::ScalarPool*, "VYaml.Parser", "ScalarPool");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.ScalarPool
class CORDL_TYPE ScalarPool : public ::System::Object {
public:
// Declarations
/// @brief Field Shared, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Shared, put=setStaticF_Shared)) ::VYaml::Parser::ScalarPool*  Shared;

/// @brief Field queue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*  queue;

static inline ::VYaml::Parser::ScalarPool* New_ctor() ;

/// @brief Method Rent, addr 0xb958ad8, size 0x94, virtual false, abstract: false, final false
inline ::VYaml::Parser::Scalar* Rent() ;

/// @brief Method Return, addr 0xb958bdc, size 0x60, virtual false, abstract: false, final false
inline void Return(::VYaml::Parser::Scalar*  scalar) ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*  value) ;

/// @brief Method .ctor, addr 0xb958c3c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Parser::ScalarPool* getStaticF_Shared() ;

static inline void setStaticF_Shared(::VYaml::Parser::ScalarPool*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalarPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalarPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalarPool(ScalarPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalarPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalarPool(ScalarPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29009};

/// @brief Field queue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Parser::Scalar*>*  ___queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::ScalarPool, ___queue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::ScalarPool) == 0x18, "Size mismatch!");

} // namespace end def VYaml::Parser
