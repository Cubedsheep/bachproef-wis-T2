#define  PHYSICS                        HD
#define  DIMENSIONS                     2
#define  COMPONENTS                     3
#define  GEOMETRY                       CARTESIAN
#define  BODY_FORCE                     NO
#define  FORCED_TURB                    NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  RK2
#define  DIMENSIONAL_SPLITTING          NO
#define  NTRACER                        0
#define  USER_DEF_PARAMETERS            3

/* -- physics dependent declarations -- */

#define  EOS                            IDEAL
#define  ENTROPY_SWITCH                 NO
#define  THERMAL_CONDUCTION             NO
#define  VISCOSITY                      NO
#define  ROTATING_FRAME                 NO

/* -- user-defined parameters (labels) -- */

#define  P_IN                           0
#define  P_OUT                          1
#define  GAMMA                          2

/* [Beg] user-defined constants (do not change this line) */

#define UNIT_DENSITY                    (1.e9*CONST_mp)
#define UNIT_LENGTH                     1.e8
#define UNIT_VELOCITY                   1.e8


/* [End] user-defined constants (do not change this line) */
