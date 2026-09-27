#pragma once
// IWYU pragma private; include "System/Threading/Timer_TimerComparer.hpp"
#include "System/Threading/zzzz__Timer_TimerComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Timer_TimerComparer.System_Collections_IComparer_Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Timer_TimerComparer::*)(::System::Object*, ::System::Object*)>(&::GlobalNamespace::Timer_TimerComparer::System_Collections_IComparer_Compare)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa355680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Timer_TimerComparer>(),
                        {"System.Collections.IComparer.Compare", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Timer_TimerComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Timer_TimerComparer::*)(::System::Threading::Timer*, ::System::Threading::Timer*)>(&::GlobalNamespace::Timer_TimerComparer::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa355718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Timer_TimerComparer>(),
                        {"Compare", {}, {::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<::System::Threading::Timer*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::Timer_TimerComparer::System_Collections_IComparer_Compare(::System::Object*  x, ::System::Object*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Timer_TimerComparer>(),
                        {"System.Collections.IComparer.Compare", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
inline int32_t GlobalNamespace::Timer_TimerComparer::Compare(::System::Threading::Timer*  tx, ::System::Threading::Timer*  ty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Timer_TimerComparer>(),
                        {"Compare", {}, {::i2c::type_of<::System::Threading::Timer*>(), ::i2c::type_of<::System::Threading::Timer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, tx, ty);
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr  GlobalNamespace::Timer_TimerComparer::operator ::System::Collections::IComparer*()  {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* GlobalNamespace::Timer_TimerComparer::i___System__Collections__IComparer()  {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr  GlobalNamespace::Timer_TimerComparer::operator ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>* GlobalNamespace::Timer_TimerComparer::i___System__Collections__Generic__IComparer_1___System__Threading__Timer__()  {
return static_cast<::System::Collections::Generic::IComparer_1<::System::Threading::Timer*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Timer_TimerComparer::Timer_TimerComparer()   {
}
