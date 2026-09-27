#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectSortKeyComparer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectSortKeyComparer_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectSortKeyComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectSortKeyComparer::*)(::Fusion::NetworkObject*, ::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectSortKeyComparer::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fcc958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSortKeyComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectSortKeyComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectSortKeyComparer::*)()>(&::Fusion::NetworkObjectSortKeyComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcc980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSortKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectSortKeyComparer::setStaticF_Instance(::Fusion::NetworkObjectSortKeyComparer*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkObjectSortKeyComparer*, "Instance", ::Fusion::NetworkObjectSortKeyComparer*>(std::forward<::Fusion::NetworkObjectSortKeyComparer*>(value));
}
inline ::Fusion::NetworkObjectSortKeyComparer* Fusion::NetworkObjectSortKeyComparer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkObjectSortKeyComparer*, "Instance", ::Fusion::NetworkObjectSortKeyComparer*>();
}
inline int32_t Fusion::NetworkObjectSortKeyComparer::Compare(::Fusion::NetworkObject*  x, ::Fusion::NetworkObject*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSortKeyComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline void Fusion::NetworkObjectSortKeyComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectSortKeyComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectSortKeyComparer* Fusion::NetworkObjectSortKeyComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectSortKeyComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>"
constexpr  Fusion::NetworkObjectSortKeyComparer::operator ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>* Fusion::NetworkObjectSortKeyComparer::i___System__Collections__Generic__IComparer_1___UnityW___Fusion__NetworkObject__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::NetworkObject>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectSortKeyComparer::NetworkObjectSortKeyComparer()   {
}
